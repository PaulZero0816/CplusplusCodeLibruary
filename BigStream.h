//
// Created by Zeqi Qiu on 11/6/18.
//

#include <iostream>
#include <fstream>
#include <queue>
#include <vector>
#include <map>

#ifndef CPLUSPLUSCODELIB_BIGSTREAM_H
#define CPLUSPLUSCODELIB_BIGSTREAM_H
template <class T>

class sorter{
public:
    template<typename Getter>
    sorter(Getter && g, std::size_t max_memory_size){
        this->g = g;
        this-> max_memory_size = max_memory_size;
        current_size = 0;
    }
    void insert_row(std::tuple<void* , std::size_t > row){
        if(current_size + std::get<1>(row) > max_memory_size){
            std::string filename = "data"+ std::to_string(files.size())+".txt";
            std::fstream f(filename, std::fstream::binary| std::fstream::out);
            auto iter = data.begin();
            for(; iter!= data.end(); ++iter){
                f.write(std::get<1>(iter->second), sizeof(std::get<1>(iter->second)));
                f.write(std::get<0>(iter->second), std::get<1>(iter->second));
            }
            f.close();
            files.push_back(filename);
            data.clear();
        }
        auto key = g(row);
        data[key] = row;
        current_size += std::get<1>(row);
    }
    void end_insertion(){
        std::string filename = "data"+ std::to_string(files.size())+".txt";
        std::fstream f(filename, std::fstream::binary| std::fstream::out);
        auto iter = data.begin();
        for(; iter!= data.end(); ++iter){
            f.write(std::get<1>(iter->second), sizeof(std::get<1>(iter->second)));
            f.write(std::get<0>(iter->second), std::get<1>(iter->second));
        }
        f.close();
        files.push_back(filename);
        data.clear();
        offsets.resize(files.size(), 0);
        int index =0;
        for(auto filename : files){
            std::fstream f(filename, std::fstream::binary | std::fstream::in);
            char* buffer = new char(sizeof(size_t));
            f.read(buffer, sizeof(size_t));
            auto len = size_t(*buffer);
            char* newbuffer = new char(len);
            f.read(newbuffer, len);
            auto v = std::tuple<void*, std::size_t>(newbuffer, len);
            auto key = g(v);
            Q.push(std::make_pair(key, index));
            ++index;
        }
    }
    std::tuple<void* , std::size_t> next_sorted_row(){
        if(Q.empty())
            return std::tuple<void* , std::size_t>(NULL, 0);
        auto p = Q.top();
        auto key = p.first;
        auto index = p.second;
        std::fstream f(files[index], std::fstream::binary | std::fstream::in);
        f.seekg(offsets[index], f.beg);
        char* buffer = new char(sizeof(size_t));
        f.read(buffer, sizeof(size_t));
        auto len = size_t(*buffer);
        char* newbuffer = new char(len);
        f.read(newbuffer, len);
        auto result = std::tuple<void*, std::size_t>(newbuffer, len);
        if(f.eof)
            return result;
        offsets[index] += (len+sizeof(size_t));

        f.read(buffer, sizeof(size_t));
        auto len2 = size_t(*buffer);
        char* newbuffer2 = new char(len2);
        f.read(newbuffer2, len2);
        auto v = std::tuple<void*, std::size_t>(newbuffer2, len2);
        auto key2 = g(v);
        Q.push(std::make_pair(key2, index));
        return result;
    };

private:
    std::map<T, std::tuple<void*, std::size_t>> data;
    std::vector<std::string> files;
    std::vector<int> offsets;
    template<typename Getter>
    std::function<T(std::tuple<void*, std::size_t>)> g;
    std::size_t max_memory_size;
    std::size_t current_size;
    T smallestKey;
    std::priority_queue<std::pair<T, int>> Q;
};
#endif //CPLUSPLUSCODELIB_BIGSTREAM_H

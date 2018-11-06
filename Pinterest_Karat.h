//
// Created by Zeqi Qiu on 11/6/18.
//

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

#ifndef CPLUSPLUSCODELIB_PINTEREST_KARAT_H
#define CPLUSPLUSCODELIB_PINTEREST_KARAT_H

vector<int> findZeroOrOneParent(vector<vector<int>> data){
    unordered_map<int, int> indegreeCount;
    for(auto p : data){
        if(indegreeCount.count(p[0]) == 0)
            indegreeCount[p[0]] = 0;
        indegreeCount[p[1]]++;
    }
    vector<int> result;
    for(auto p : indegreeCount){
        if(p.second == 0 || p.second == 1)
            result.push_back(p.first);
    }
    return result;
}


#endif //CPLUSPLUSCODELIB_PINTEREST_KARAT_H

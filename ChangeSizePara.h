//
// Created by Zeqi Qiu on 10/31/18.
//

#ifndef CPLUSPLUSCODELIB_CHANGESIZEPARA_H
#define CPLUSPLUSCODELIB_CHANGESIZEPARA_H

#include <iostream>
#include "stdarg.h"
using namespace std;

int sum(int count, ...)
{
	int sum_value=0;

	va_list args;
	va_start(args,count);
	while(count--)
	{
		sum_value+=va_arg(args,int);
	}
	va_end(args);

	return sum_value;
}

#endif //CPLUSPLUSCODELIB_CHANGESIZEPARA_H

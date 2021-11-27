#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdio.h>
#include <iostream>

using namespace std;


class main
{
	public:
		void add(int a,int b);
};



extern "C"
{
	void addc(int c,int d);
}


#endif

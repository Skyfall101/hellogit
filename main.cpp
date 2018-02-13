//client file
//main.cpp
#include "Number.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	Number ob;
	Number ob2={37, 16.05};
	vector<Number>v;
	v.push_back(ob);
	v.push_back(ob2);
	v.push_back({20, 11.10});
}

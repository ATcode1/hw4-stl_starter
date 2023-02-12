#ifndef __HW4_H
#define __HW4_H
#include <iostream>
#include <fstream>
#include <stack>
#include <queue>

using namespace std;

void insertStack(stack<int>& s, string inputfile);
int popElem(stack<int> s);
void insertQueue(queue<int>& q, string inputfile);
int popQueue(queue<int> q);

#endif

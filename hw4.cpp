#include "hw4.h"

void insertStack(stack<int>& s, string inputfile){
	
	int sum;
	int temp;

	sum = 0;
	temp = 0;

	ifstream file(inputfile);
	
	while(file >> temp){
		s.push(temp);
		sum += temp;
	}

	if(sum < 0) {
		throw("Negative Sum");
	}

	file.close();

}


int popElem(stack<int> s){
	
	int temp;

	temp = 0;

	while(!s.empty()){
		temp = s.top();
		s.pop();
	}

	return temp;

}

void insertQueue(queue<int>& q, string inputfile){
	
	int temp;

	temp = 0;

	ifstream file(inputfile);
	
	while(file >> temp){
		q.push(temp);
	}

	file.close();

}

int popQueue(queue<int> q){
	
	int temp;

	temp = 0;

	while(!q.empty()){
		temp = q.front();
		q.pop();
	}

	return temp;

}




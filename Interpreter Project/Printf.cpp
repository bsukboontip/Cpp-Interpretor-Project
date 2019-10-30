#include "Printf.h"


Printf::Printf(){}
Printf::~Printf(){}

int Printf::execute(vector<StackValues*> rstack, stack<int>fpstack, int sp, int fpsp, int pc){
	cout << rstack[sp--]->f << endl;
	rstack.pop_back();	
	pc++;
	return pc;
}
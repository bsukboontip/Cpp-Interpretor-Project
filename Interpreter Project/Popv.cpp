#include "Popv.h"

Popv::Popv(){}
Popv::~Popv(){}

int Popv::execute(vector<StackValues*> rstack, vector<int>fpstack, int sp, int fpsp, int pc){
	
	rstack[fpstack[fpsp] + rstack[sp]->getInt() + 1] = rstack[sp-1];
	sp-=2;
	rstack.pop_back();
	rstack.pop_back();
	pc++;
	return pc;
}
#include "Popv.h"

Popv::Popv(){}
Popv::~Popv(){}

int Popv::execute(vector<StackValues*> rstack, vector<int>fpstack, int sp, int fpsp, int pc){
	
<<<<<<< HEAD
	rstack[fpstack[fpsp] + rstack[sp]->i + 1] = rstack[sp-1];
=======
	rstack[fpstack[fpsp] + rstack[sp]->getInt() + 1] = rstack[sp-1];
>>>>>>> e563bd7dfe18c6f5feada755098320749bd5d7e9
	sp-=2;
	rstack.pop_back();
	rstack.pop_back();
	pc++;
	return pc;
}
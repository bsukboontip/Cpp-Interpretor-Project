#include "Peeks.h"

Peeks::Peeks(){}
Peeks::~Peeks(){}

int Peeks::execute(vector<StackValues*> rstack, vector<int>fpstack, int sp, int fpsp, int pc){
	rstack[fpstack[fpsp] + rstack[sp-1]->getInt() + 1]->s = rstack[fpstack[fpsp] + rstack[sp]->getInt() + 1]->getShort();
	pc++;
	return pc;
}
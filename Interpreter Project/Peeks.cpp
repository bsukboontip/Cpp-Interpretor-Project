#include "Peeks.h"

Peeks::Peeks(){}
Peeks::~Peeks(){}

int Peeks::execute(vector<StackValues*> rstack, vector<int>fpstack, int sp, int fpsp, int pc){
	rstack[fpstack[fpsp] + rstack[sp-1]->s + 1]->s = rstack[fpstack[fpsp] + rstack[sp]->s + 1]->s;
	pc++;
	return pc;
}
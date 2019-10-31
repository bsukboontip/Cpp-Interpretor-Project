#include "Peekf.h"

Peekf::Peekf(){}
Peekf::~Peekf(){}

int Peekf::execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc){
	rstack[fpstack[fpsp] + rstack[sp-1]->getInt() + 1]->f = rstack[fpstack[fpsp] + rstack[sp]->getInt() + 1]->getFloat();
	pc++;
	return pc;
}
#include "Peeki.h"

Peeki::Peeki(){}
Peeki::~Peeki(){}

int Peeki::execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag){
	rstack[fpstack[fpsp] + rstack[sp-1]->i + 1]->i = rstack[fpstack[fpsp] + rstack[sp]->getInt() + 1]->i;
	pc++;
	return pc;
}
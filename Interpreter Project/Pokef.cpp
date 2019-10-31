#include "Pokef.h"

Pokef::Pokef(){}
Pokef::~Pokef(){}

int Pokef::execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag){
	rstack[fpstack[fpsp] + rstack[sp]->getInt() + 1]->f = rstack[fpstack[fpsp] + rstack[sp - 1]->getInt() + 1]->getFloat();

	rstack.pop_back();
	rstack.pop_back();
	sp -= 2;

	pc++;
	return pc;
}
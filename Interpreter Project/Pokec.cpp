#include "Pokec.h"

Pokec::Pokec(){}
Pokec::~Pokec(){}

int Pokec::execute(vector<StackValues*> rstack, vector<int> fpstack, int sp, int fpsp, int pc){
	rstack[fpstack[fpsp] + rstack[sp]->getInt() + 1]->c = rstack[fpstack[fpsp] + rstack[sp - 1]->getInt() + 1]->getChar();

	rstack.pop_back();
	rstack.pop_back();
	sp -= 2;

	pc++;
	return pc;
}
#include "Peekc.h"

Peekc::Peekc(){}
Peekc::~Peekc(){}

int Peekc::execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc){

	rstack[fpstack[fpsp] + rstack[sp-1]->getInt() + 1]->c = rstack[fpstack[fpsp] + rstack[sp]->getInt() + 1]->getChar();
	pc++;
	return pc;
}	
#include "Pokes.h"


Pokes::Pokes(){}
Pokes::~Pokes(){}

int Pokes::execute(vector<StackValues*> rstack, vector<int> fpstack, int sp, int fpsp, int pc){
	rstack[fpstack[fpsp] + rstack[sp]->getInt() + 1]->s = rstack[fpstack[fpsp] + rstack[sp - 1]->getInt() + 1]->getShort();

	rstack.pop_back();
	rstack.pop_back();
	sp -= 2;

	pc++;
	return pc;
}
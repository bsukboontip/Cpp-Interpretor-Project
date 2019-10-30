#include "Pokei.h"


Pokei::Pokei(){}
Pokei::~Pokei(){}

int Pokei::execute(vector<StackValues*> rstack, vector<int> fpstack, int sp, int fpsp, int pc){
	rstack[fpstack[fpsp] + rstack[sp]->getInt() + 1]->i = rstack[fpstack[fpsp] + rstack[sp - 1]->getInt() + 1]->getInt();

	rstack.pop_back();
	rstack.pop_back();
	sp -= 2;

	pc++;
	return pc;
}
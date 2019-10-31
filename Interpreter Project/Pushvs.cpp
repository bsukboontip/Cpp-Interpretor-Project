#include "Pushvs.h"

Pushvs::Pushvs(){}
Pushvs::~Pushvs(){}

int Pushvs::execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag){
	int loc = rstack[sp]->getInt();
	rstack.pop_back();
	int integer = fpstack[fpsp] + loc + 1;
	StackValues* newStack = new StackValues(rstack[integer]->getShort());
	rstack.push_back(newStack);

	pc++;

	return pc;
}
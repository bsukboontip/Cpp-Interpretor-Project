#include "Pushvf.h"


Pushvf::Pushvf(){}
Pushvf::~Pushvf(){}

int Pushvf::execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag){
	int loc = rstack[sp]->getInt();
	rstack.pop_back();
	int integer = fpstack[fpsp] + loc + 1;
	StackValues* newStack = new StackValues(rstack[integer]->getFloat());
	rstack.push_back(newStack);

	pc++;

	return pc;
}
#include "Pushvc.h"

Pushvc::Pushvc(){}
Pushvc::~Pushvc(){}

int Pushvc::execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc){
	int loc = rstack[sp]->getInt();
	rstack.pop_back();
	int integer = fpstack[fpsp] + loc + 1;
	StackValues* newStack = new StackValues(rstack[integer]->getChar());
	rstack.push_back(newStack);

	pc++;

	return pc;
}
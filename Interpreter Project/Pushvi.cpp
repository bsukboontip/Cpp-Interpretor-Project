#include "Pushvi.h"


Pushvi::Pushvi(){}
Pushvi::~Pushvi(){}

int Pushvi::execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag){
	int loc = rstack[sp]->getInt();
	rstack.pop_back();
	int integer = fpstack[fpsp] + loc + 1;
	StackValues* newStack = new StackValues(rstack[integer]->getInt());
	rstack.push_back(newStack);

	pc++;

	return pc;
}
#include "Popm.h"


Popm::Popm(){}
Popm::~Popm(){}

int Popm::execute(vector<StackValues*> rstack, vector<int>fpstack, int sp, int fpsp, int pc){
	int i;
	if (rstack[sp]->getType() == 'c' && rstack[sp-1]->getType() == 'c') {
		sp -= rstack[sp]->getChar() + 1;
		for (i = 0; i < rstack[sp]->getChar() + 1; i++) {
			rstack.pop_back();
		}
	}
	else if (rstack[sp]->getType() == 's' && rstack[sp-1]->getType() == 's') {
		sp -= rstack[sp]->getShort() + 1;
		for (i = 0; i < rstack[sp]->getShort() + 1; i++) {
			rstack.pop_back();
		}	
	}
	else if (rstack[sp]->getType() == 'i' && rstack[sp-1]->getType() == 'i') {
		sp -= rstack[sp]->getInt() + 1;
		for (i = 0; i < rstack[sp]->getInt() + 1; i++) {
			rstack.pop_back();
		}
	}
	else if (rstack[sp]->getType() == 'f' && rstack[sp-1]->getType() == 'f') {
		sp -= rstack[sp]->getFloat() + 1;
		for (i = 0; i < rstack[sp]->getFloat() + 1; i++) {
			rstack.pop_back();
		}	
	}
	pc++;
	return pc;
}

#include "Jmpc.h"

Jmpc::Jmpc(){}
Jmpc::~Jmpc(){}

int Jmpc::execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc){
	
	if (rstack[sp - 1]->getType() == 'c') {
		if (rstack[sp - 1]->getChar()) {
			pc = rstack[sp]->getInt();
		}
		else {
			pc++;
		}
	}
	else if (rstack[sp - 1]->getType() == 's') {
		if (rstack[sp - 1]->getShort()) {
			pc = rstack[sp]->getInt();
		}
		else {
			pc++;
		}
	}
	else if (rstack[sp - 1]->getType() == 'i') {
		if (rstack[sp - 1]->getInt()) {
			pc = rstack[sp]->getInt();
		}
		else {
			pc++;
		}
	}
	else if (rstack[sp - 1]->getType() == 'f') {
		if (rstack[sp - 1]->getFloat()) {
			pc = rstack[sp]->getInt();
		}
		else {
			pc++;
		}
	}

	rstack.pop_back();
	rstack.pop_back();
	sp -= 2;

	return pc;
}

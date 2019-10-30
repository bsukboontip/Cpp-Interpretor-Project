#include "Jmp.h"

Jmp::Jmp(){}
Jmp::~Jmp(){}

int Jmp::execute(vector<StackValues*> rstack, vector<int> fpstack, int sp, int fpsp, int pc){
	pc = rstack[sp]->getInt();
	rstack.pop_back();
	sp--;

	return pc;
}
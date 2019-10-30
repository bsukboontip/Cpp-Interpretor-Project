#include "Call.h"

Call::Call(){}
Call::~Call(){}

int Call::execute(vector<StackValues*> rstack, vector<int> fpstack, int sp, int fpsp, int pc){
	fpstack.push(sp - rstack[sp]->getInt() - 1);
	fpsp++;
	sp--;
	pc = rstack[sp--]->getInt();
	rstack.pop_back();
	rstack.pop_back();

	return pc;	
}
#include "Ret.h"


Ret::Ret(){}
Ret::~Ret(){}

int Ret::execute(vector<StackValues*> rstack, stack<int> fpstack, int sp, int fpsp, int pc){
	sp = fpstack.pop();
	fpsp--;
	pc = rstack[sp--].getInt();
	rstack.pop_back();
	return pc;
}
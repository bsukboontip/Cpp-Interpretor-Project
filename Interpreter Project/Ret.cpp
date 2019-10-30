#include "Ret.h"


Ret::Ret(){}
Ret::~Ret(){}

int Ret::execute(vector<StackValues*> rstack, vector<int> fpstack, int sp, int fpsp, int pc){
	sp = fpstack[fpsp];
	fpstack.pop_back();
	fpsp--;
	pc = rstack[sp--]->getInt();
	rstack.pop_back();
	return pc;
}
#include "Halt.h"

Halt::Halt(){}
Halt::~Halt(){}

int Halt::execute(vector<StackValues*> rstack, stack<int> fpstack, int sp, int fpsp, int pc){
	pc = -1;
	return pc;
}

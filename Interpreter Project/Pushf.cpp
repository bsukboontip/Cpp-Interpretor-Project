#include "Pushf.h"

Pushf::Pushf(){}
Pushf::~Pushf(){}

int Pushf::execute(vector<StackValues*> rstack, vector<int> fpstack, int sp, int fpsp, int pc){
	
	pc = pc + 5;
	return pc;
}
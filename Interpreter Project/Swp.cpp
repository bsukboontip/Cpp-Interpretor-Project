#include "Swp.h"


Swp::Swp(){}
Swp::~Swp(){}

int Swp::execute(vector<StackValues*> rstack, vector<int> fpstack, int sp, int fpsp, int pc){
	
	StackValues * temp; 
	temp = rstack[sp-1];
	rstack[sp-1] = rstack[sp];
	rstack[sp] = temp;

	pc++;
	return pc;
}
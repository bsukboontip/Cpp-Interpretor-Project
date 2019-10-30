#include "Printc.h"


Printc::Printc(){}
Printc::~Printc(){}

int Printc::execute(vector<StackValues*> rstack, stack<int>fpstack, int sp, int fpsp, int pc){
	
	cout << rstack[sp--]->c << endl;
	pc++;
	return pc;
}
#include "Printc.h"


Printc::Printc(){}
Printc::~Printc(){}

int Printc::execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag){
	
	cout << (int) rstack[sp--]->c << endl;
	rstack.pop_back();	
	pc++;
	return pc;
}

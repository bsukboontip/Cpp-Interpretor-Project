#include "Prints.h"


Prints::Prints(){}
Prints::~Prints(){}

int Prints::execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag){
	cout << rstack[sp--]->s << endl;
	rstack.pop_back();	
	pc++;
	return pc;
}
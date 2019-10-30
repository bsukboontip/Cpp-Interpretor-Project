#include "Printi.h"


Printi::Printi(){}
Printi::~Printi(){}

int Printi::execute(vector<StackValues*> rstack, stack<int>fpstack, int sp, int fpsp, int pc){
	cout << rstack[sp--]->i << endl;
	pc++;
	return pc;
}
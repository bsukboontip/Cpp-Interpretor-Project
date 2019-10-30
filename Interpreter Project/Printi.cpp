#include "Printi.h"


Printi::Printi(){}
Printi::~Printi(){}

int Printi::execute(vector<StackValues*> rstack, vector<int>fpstack, int sp, int fpsp, int pc){
	cout << rstack[sp--]->i << endl;
	rstack.pop_back();	
	pc++;
	return pc;
}
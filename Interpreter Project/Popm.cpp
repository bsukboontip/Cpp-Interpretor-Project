#include "Popm.h"


Popm::Popm(){}
Popm::~Popm(){}

int Popm::execute(vector<StackValues*> rstack, vector<int>fpstack, int sp, int fpsp, int pc){
	int i;
	if (rstack[sp]->type == 'c' && rstack[sp-1]->type == 'c') {
		sp -= rstack[sp]->c + 1;
		for (i = 0; i < rstack[sp]->c + 1; i++) {
			rstack.pop_back();
		}
	}
	else if (rstack[sp]->type == 's' && rstack[sp-1]->type == 's') {
		sp -= rstack[sp]->s + 1;
		for (i = 0; i < rstack[sp]->s + 1; i++) {
			rstack.pop_back();
		}	
	}
	else if (rstack[sp]->type == 'i' && rstack[sp-1]->type == 'i') {
		sp -= rstack[sp]->i + 1;
		for (i = 0; i < rstack[sp]->i + 1; i++) {
			rstack.pop_back();
		}
	}
	else if (rstack[sp]->type == 'f' && rstack[sp-1]->type == 'f') {
		sp -= rstack[sp]->f + 1;
		for (i = 0; i < rstack[sp]->f + 1; i++) {
			rstack.pop_back();
		}	
	}
	pc++;
	return pc;
}
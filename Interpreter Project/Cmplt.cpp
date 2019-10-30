#include "Cmplt.h"


Cmplt::Cmplt(){}
Cmplt::~Cmplt(){}

int Cmplt::execute(vector<StackValues*> rstack, vector<int>fpstack, int sp, int fpsp, int pc){

	if (rstack[sp]->getType() == 'c' && rstack[sp-1]->getType() == 'c') {
		rstack[sp-1]->c = rstack[sp-1]->c < rstack[sp]->c;
		rstack.pop_back();	
		sp--;
	}
	else if (rstack[sp]->getType() == 's' && rstack[sp-1]->getType() == 's') {
		rstack[sp-1]->s = rstack[sp-1]->s < rstack[sp]->s;
		rstack.pop_back();	
		sp--;		
	}
	else if (rstack[sp]->getType() == 'i' && rstack[sp-1]->getType() == 'i') {
		rstack[sp-1]->i = rstack[sp-1]->i < rstack[sp]->i;
		rstack.pop_back();	
		sp--;
	}
	else if (rstack[sp]->getType() == 'f' && rstack[sp-1]->getType() == 'f') {
		rstack[sp-1]->f = rstack[sp-1]->f < rstack[sp]->f;
		rstack.pop_back();	
		sp--;		
	}
	pc++;
	return pc;
}
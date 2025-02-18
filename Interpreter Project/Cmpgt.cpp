#include "Cmpgt.h"


Cmpgt::Cmpgt(){}
Cmpgt::~Cmpgt(){}

int Cmpgt::execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag){


	if (rstack[sp]->type == 'c' && rstack[sp-1]->type == 'c') {
		rstack[sp-1]->c = rstack[sp-1]->c > rstack[sp]->c;
		rstack.pop_back();	
		sp--;
	}
	else if (rstack[sp]->type == 's' && rstack[sp-1]->type == 's') {
		rstack[sp-1]->s = rstack[sp-1]->s > rstack[sp]->s;
		rstack.pop_back();	
		sp--;		
	}
	else if (rstack[sp]->type == 'i' && rstack[sp-1]->type == 'i') {
		rstack[sp-1]->i = rstack[sp-1]->i > rstack[sp]->i;
		rstack.pop_back();	
		sp--;
	}
	else if (rstack[sp]->type == 'f' && rstack[sp-1]->type == 'f') {
		rstack[sp-1]->f = rstack[sp-1]->f > rstack[sp]->f;
		rstack.pop_back();	
		sp--;		
	}
	pc++;
	
	return pc;
}
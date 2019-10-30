#include "Sub.h"

Sub::Sub(){}
Sub::~Sub(){}

int Sub::execute(vector<StackValues*>, stack<int>, int, int, int){
	
	if (rstack[sp]->type == 'c' && rstack[sp-1] == 'c') {
		rstack[sp-1]->c = rstack[sp-1]->c + rstack[sp]->c;
		sp--;
	}
	else if (rstack[sp]->type == 's' && rstack[sp-1] == 's') {
		rstack[sp-1]->s = rstack[sp-1]->s - rstack[sp]->s;
		sp--;		
	}
	else if (rstack[sp]->type == 'i' && rstack[sp-1] == 'i') {
		rstack[sp-1]->i = rstack[sp-1]->i - rstack[sp]->i;
		sp--;
	}
	else if (rstack[sp]->type == 'f' && rstack[sp-1] == 'f') {
		rstack[sp-1]->f = rstack[sp-1]->f - rstack[sp]->f;
		sp--;		
	}
	pc++;
	return pc;
}
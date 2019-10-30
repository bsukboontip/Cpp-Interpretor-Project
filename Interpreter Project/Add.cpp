#include "Add.h"


Add::Add(){}
Add::~Add(){}

int Add::execute(vector<StackValues*> rstack, stack<int>fpstack, int sp, int fpsp, int pc){

	// if (rstack[sp]->type == 'c' && rstack[sp-1] == 'c') {
	// 	rstack[sp-1]->c = rstack[sp-1]->t + rstack[sp]->t;
	// 	sp--;
	// }
	// else if (rstack[sp]->type == 's' && rstack[sp-1] == 's') {
	// 	rstack[sp-1]->s = rstack[sp-1]->s + rstack[sp]->s;
	// 	sp--;		
	// }
	// else if (rstack[sp]->type == 'i' && rstack[sp-1] == 'i') {
	// 	rstack[sp-1]->i = rstack[sp-1]->i + rstack[sp]->i;
	// 	sp--;

		
	// }
	// else if (rstack[sp]->type == 'f' && rstack[sp-1] == 'f') {
	// 	rstack[sp-1]->f = rstack[sp-1]->t + rstack[sp]->f;
	// 	sp--;		
	// }
	// pc++;
	return pc;
}
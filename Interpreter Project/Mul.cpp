#include "Mul.h"

Mul::Mul(){}
Mul::~Mul(){}

int Mul::execute(vector<StackValues*> rstack, vector<int>fpstack, int sp, int fpsp, int pc){

	if (rstack[sp]->getType() == 'c' && rstack[sp-1]->getType() == 'c') {
		rstack[sp-1]->getChar() = rstack[sp-1]->getChar() * rstack[sp]->getChar();
		rstack.pop_back();	
		sp--;
	}
	else if (rstack[sp]->getType() == 's' && rstack[sp-1]->getType() == 's') {
		rstack[sp-1]->getShort() = rstack[sp-1]->getShort() * rstack[sp]->getShort();
		rstack.pop_back();	
		sp--;		
	}
	else if (rstack[sp]->getType() == 'i' && rstack[sp-1]->getType() == 'i') {
		rstack[sp-1]->getInt() = rstack[sp-1]->getInt() * rstack[sp]->getInt();
		rstack.pop_back();	
		sp--;
	}
	else if (rstack[sp]->getType() == 'f' && rstack[sp-1]->getType() == 'f') {
		rstack[sp-1]->getFloat() = rstack[sp-1]->getFloat() * rstack[sp]->getFloat();
		rstack.pop_back();	
		sp--;		
	}
	pc++;
}
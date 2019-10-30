#include "Popa.h"


Popa::Popa(){}
Popa::~Popa(){}

int Popa::execute(vector<StackValues*> rstack, vector<int> fpstack, int sp, int fpsp, int pc){
	int saveNum = rstack[sp]->getInt();
	rstack.pop_back();
	sp--;
	int tempInd = -1;
	vector<StackValues*> tempStack;
	for (int i = 0; i < saveNum; i++) {
		tempStack.push_back(rstack[sp--]);
		tempInd++;
		rstack.pop_back();
	}

	while (fpstack[fpsp] != sp) {
		rstack.pop_back();
		sp--;
	}

	while (tempInd >= 0) {
		rstack.push_back(tempStack[tempInd]);
		tempStack.pop_back();
		tempInd--;
	}

	pc++;
	return pc;
}
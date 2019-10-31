#include "Call.h"

Call::Call(){}
Call::~Call(){}

int Call::execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc){
	fpstack.push_back(sp - rstack[sp]->getInt() - 1);
	fpsp++;
	sp--;
	// cout << "PC in CALL BEFORE: " << pc << " sp: " << sp << endl;
	pc = rstack[sp--]->getInt();
	// cout << "PC in CALL AFTER: " << pc << endl;
	rstack.pop_back();
	rstack.pop_back();
	cout << "fpstack[" << fpsp <<"]= " << fpstack.back() << endl;
	
	return pc;	
}

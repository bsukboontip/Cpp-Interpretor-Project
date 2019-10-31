#include "Ret.h"


Ret::Ret(){}
Ret::~Ret(){}

int Ret::execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag){
	sp = fpstack[fpsp];
	// cout << "fpstack[" << fpsp <<"]= " << fpstack.back() << endl;
	fpstack.pop_back();
	fpsp--;
	// cout << "rstack[" << sp <<"]= " << rstack.back()->i << endl;
	pc = rstack[sp--]->getInt();
	rstack.pop_back();
	// cout << "rstack[" << sp <<"]= size " << rstack.size() << endl;
	// cout << "pc = " << pc << endl;
	return pc;
}

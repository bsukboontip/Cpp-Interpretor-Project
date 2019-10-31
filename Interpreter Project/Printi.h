#ifndef PRINTI_H
#define PRINTI_H
#include "ByteCode.h"

class Printi : public ByteCode {
public:
	Printi();
	virtual ~Printi();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc);
};
#endif
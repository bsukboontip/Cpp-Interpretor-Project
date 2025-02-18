#ifndef HALT_H
#define HALT_H
#include "ByteCode.h"

class Halt : public ByteCode {
public:
	Halt();
	virtual ~Halt();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);
};
#endif
#ifndef MUL_H
#define MUL_H
#include "ByteCode.h"

class Mul : public ByteCode {
public:
	Mul();
	virtual ~Mul();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);
};
#endif
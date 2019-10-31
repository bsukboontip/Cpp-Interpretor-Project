#ifndef POPA_H
#define POPA_H
#include "ByteCode.h"

class Popa : public ByteCode {
public:
	Popa();
	virtual ~Popa();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc);
};
#endif
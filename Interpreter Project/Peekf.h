#ifndef PEEKF_H
#define PEEKF_H
#include "ByteCode.h"

class Peekf : public ByteCode {
public:
	Peekf();
	virtual ~Peekf();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc);
};
#endif
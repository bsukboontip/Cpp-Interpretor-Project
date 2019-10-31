#ifndef PUSHVF_H
#define PUSHVF_H
#include "ByteCode.h"

class Pushvf : public ByteCode {
public:
	Pushvf();
	virtual ~Pushvf();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc);
};
#endif
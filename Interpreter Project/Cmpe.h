#ifndef CMPE_H
#define CMPE_H
#include "ByteCode.h"

class Cmpe : public ByteCode {
public:
	Cmpe();
	virtual ~Cmpe();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);
};
#endif
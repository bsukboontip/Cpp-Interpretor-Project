#ifndef POPV_H
#define POPV_H
#include "ByteCode.h"

class Popv : public ByteCode {
public:
	Popv();
	virtual ~Popv();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);
};
#endif
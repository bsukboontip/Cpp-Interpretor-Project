#ifndef PRINTC_H
#define PRINTC_H
#include "ByteCode.h"

class Printc : public ByteCode {
public:
	Printc();
	virtual ~Printc();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);
};
#endif
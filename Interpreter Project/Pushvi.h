#ifndef PUSHVI_H
#define PUSHVI_H
#include "ByteCode.h"

class Pushvi : public ByteCode {
public:
	Pushvi();
	virtual ~Pushvi();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);
};
#endif
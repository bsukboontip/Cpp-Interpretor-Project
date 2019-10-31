#ifndef PEEKC_H
#define PEEKC_H
#include "ByteCode.h"

class Peekc : public ByteCode {
public:
	Peekc();
	virtual ~Peekc();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);
};
#endif
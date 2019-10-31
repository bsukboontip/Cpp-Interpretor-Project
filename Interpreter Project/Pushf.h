#ifndef PUSHF_H
#define PUSHF_H
#include "ByteCode.h"

class Pushf : public ByteCode {
public:
	Pushf();
	virtual ~Pushf();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc);
};
#endif
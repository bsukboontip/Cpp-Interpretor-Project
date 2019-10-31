#ifndef PUSHVS_H
#define PUSHVS_H
#include "ByteCode.h"

class Pushvs : public ByteCode {
public:
	Pushvs();
	virtual ~Pushvs();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);
};
#endif
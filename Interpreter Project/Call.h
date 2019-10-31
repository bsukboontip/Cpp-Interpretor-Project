#ifndef CALL_H
#define CALL_H
#include "ByteCode.h"

class Call : public ByteCode {
public:
	Call();
	virtual ~Call();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);
};
#endif
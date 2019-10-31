#ifndef ADD_H
#define ADD_H
#include "ByteCode.h"

class Add : public ByteCode {
public:
	Add();
	virtual ~Add();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc);
};
#endif
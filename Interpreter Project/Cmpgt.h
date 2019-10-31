#ifndef CMPGT_H
#define CMPGT_H
#include "ByteCode.h"

class Cmpgt : public ByteCode {
public:
	Cmpgt();
	virtual ~Cmpgt();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);
};
#endif
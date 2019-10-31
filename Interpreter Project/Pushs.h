#ifndef PUSHS_H
#define PUSHS_H
#include "ByteCode.h"

class Pushs : public ByteCode {
public:
	Pushs();
	virtual ~Pushs();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);
};
#endif
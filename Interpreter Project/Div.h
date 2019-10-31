#ifndef DIV_H
#define DIV_H
#include "ByteCode.h"

class Div : public ByteCode {
public:
	Div();
	virtual ~Div();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);
};
#endif
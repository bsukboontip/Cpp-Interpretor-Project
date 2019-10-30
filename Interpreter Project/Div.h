#ifndef DIV_H
#define DIV_H
#include "ByteCode.h"

class Div : public ByteCode {
public:
	Div();
	virtual ~Div();
	int execute(vector<StackValues*>, vector<int>, int, int, int);
};
#endif
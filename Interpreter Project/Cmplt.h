#ifndef CMPLT_H
#define CMPLT_H
#include "ByteCode.h"

class Cmplt : public ByteCode {
public:
	Cmplt();
	virtual ~Cmplt();
	int execute(vector<StackValues*>, stack<int>, int, int, int);
};
#endif
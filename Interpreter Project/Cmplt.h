#ifndef CMPLT_H
#define CMPLT_H
#include "ByteCode.h"

class Cmplt : public ByteCode {
public:
	Cmplt();
	virtual ~Cmplt();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);
};
#endif
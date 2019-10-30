#ifndef SWP_H
#define SWP_H
#include "ByteCode.h"

class Swp : public ByteCode {
public:
	Swp();
	virtual ~Swp();
	int execute(vector<StackValues*>, stack<int>, int, int, int);
};
#endif
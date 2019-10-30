#ifndef POKES_H
#define POKES_H
#include "ByteCode.h"

class Pokes : public ByteCode {
public:
	Pokes();
	virtual ~Pokes();
	int execute(vector<StackValues*>, stack<int>, int, int);
};
#endif

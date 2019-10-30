#ifndef PEEKI_H
#define PEEKI_H
#include "ByteCode.h"

class Peeki : public ByteCode {
public:
	Peeki();
	virtual ~Peeki();
	int execute(vector<StackValues*>, stack<int>, int, int);
};
#endif
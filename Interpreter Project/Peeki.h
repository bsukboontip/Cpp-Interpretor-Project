#ifndef PEEKI_H
#define PEEKI_H
#include "ByteCode.h"

class Peeki : public ByteCode {
public:
	Peeki();
	virtual ~Peeki();
	int execute(vector<StackValues*>, vector<int>, int, int, int);
};
#endif
#ifndef PEEKI_H
#define PEEKI_H
#include "ByteCode.h"

class Peeki : public ByteCode {
public:
	Peeki();
	virtual ~Peeki();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);
};
#endif
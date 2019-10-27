#ifndef CMPE_H
#define CMPE_H
#include "ByteCode.h"

class Peeki : public ByteCode {
public:
	Peeki();
	virtual ~Peeki();
	int execute();
}
#endif
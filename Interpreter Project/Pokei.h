#ifndef POKEI_H
#define POKEI_H
#include "ByteCode.h"

class Pokei : public ByteCode {
public:
	Pokei();
	virtual ~Pokei();
	int execute();
};
#endif
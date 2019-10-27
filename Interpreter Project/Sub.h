#ifndef SUB_H
#define SUB_H
#include "ByteCode.h"

class Sub : public ByteCode {
public:
	Sub();
	virtual ~Sub();
	int execute();
}
#endif
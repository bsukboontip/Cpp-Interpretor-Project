#include "ByteCode.h"

ByteCode::ByteCode() {}
ByteCode::~ByteCode() {}

char ByteCode::getChar() {
	error = true;
	return NULL;
}

short ByteCode::getShort() {
	error = true;
	return NULL;
}

int ByteCode::getInt() {
	error = true;
	return NULL;
}

float ByteCode::getFloat() {
	error = true;
	return NULL;
}

int ByteCode::execute() {
	int pc = 0;
	cout << "bruhh" << endl;
	return pc;
}

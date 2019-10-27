#include "Int.h"

Int::Int() {
	error = false;
}

Int::Int(bool x) {
	error = x;
}

Int::~Int() {}

char Int::getChar() {
	error = true;
	return NULL;
}

short Int::getShort() {
	error = true;
	return NULL;
}

int Int::getInt() {
	error = true;
	return NULL;
}

float Int::getFloat() {
	error = true;
	return NULL;
}

int Int::execute() {
	error = true;
	return NULL;
}
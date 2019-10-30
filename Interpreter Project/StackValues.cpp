#include "StackValues.h"

StackValues::StackValues() {
	error = false;
}


StackValues::~StackValues() {}

char StackValues::getChar() {
	return c;
}

short StackValues::getShort() {
	return s;
}

int StackValues::getInt() {
	return i;
}

float StackValues::getFloat() {
	return f;
}

char StackValues::getType() {
	return type;
}
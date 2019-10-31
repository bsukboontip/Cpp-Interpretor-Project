#include "StackValues.h"

StackValues::StackValues() {}

StackValues::~StackValues() {}

StackValues::StackValues(char x) {
	c = x;
	type = 'c';
}

StackValues::StackValues(short x) {
	s = x;
	type = 's';
}

StackValues::StackValues(int x) {
	i = x;
	type = 'i';
}

StackValues::StackValues(float x) {
	f = x;
	type = 'f';
}

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

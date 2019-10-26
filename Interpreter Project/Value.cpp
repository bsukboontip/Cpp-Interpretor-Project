#include "Value.h"

Value::Value() {}
Value::~Value() {}

char Value::getChar() {
	return c;
}

short Value::getShort() {
	return s;
}

int Value::getInt() {
	return i;
}

float Value::getFloat() {
	return f;
}
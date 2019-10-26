#include "Value.h"

Value::Value() {
	error = false;
}

Value::Value(bool x) {
	error = x;
}

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

int Value::execute() {
	error = true;
	return NULL;
}
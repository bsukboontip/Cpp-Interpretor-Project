#include "Value.h"

Value::Value() {
	error = false;
}

Value::Value(bool x) {
	error = x;
}

Value::~Value() {}

char Value::getChar() {
	error = true;
	return NULL;
}

short Value::getShort() {
	return s;
}

int Value::getInt() {
	error = true;
	return NULL;
}

float Value::getFloat() {
	error = true;
	return NULL;
}

int Value::execute() {
	error = true;
	return NULL;
}
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include "MemoryObject.h"
#include "Value.h"
#include "ByteCode.h"
#include "Char.h"
#include "Short.h"
#include "Int.h"
#include "Float.h"

#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"

#include "Printc.h"
#include "Printf.h"
#include "Prints.h"
#include "Printi.h"

#include "Cmpe.h"
#include "Cmplt.h"
#include "Cmpgt.h"

#include "Jmp.h"
#include "Jmpc.h"
#include "Call.h"
#include "Ret.h"

#include "Pushc.h"
#include "Pushs.h"
#include "Pushi.h"
#include "Pushf.h"
#include "Pushvc.h"
#include "Pushvf.h"
#include "Pushvi.h"
#include "Pushvs.h"
#include "Popm.h"
#include "Popv.h"
#include "Popa.h"
#include "Peekc.h"
#include "Peekf.h"
#include "Peeki.h"
#include "Peeks.h"
#include "Pokec.h"
#include "Pokef.h"
#include "Pokei.h"
#include "Pokes.h"
#include "Swp.h"
#include "Halt.h"
#include "StackValues.h"

using namespace std;

int main(void) {

	FILE *inputF = fopen("interpreter_input.smp", "rb");
	// FILE *inputF = fopen("36_jmp_test.smp", "rb");
	// FILE *inputF = fopen("40_jmpc_test.smp", "rb");
	// FILE *inputF = fopen("Jumps.bin", "rb");
	fseek(inputF, 0, SEEK_END);
	unsigned int inputSize = ftell(inputF);
	rewind(inputF);

	unsigned char* memory = (unsigned char*) malloc(sizeof(unsigned char) * inputSize);
	if (memory == NULL) {
		fputs("memory error", stderr);
		exit(1);
	}

	unsigned int result = fread(memory, 1, inputSize, inputF);
	if (result != inputSize) {
		fputs("reading error", stderr);
		exit(2);
	}

	int sp = -1;
	int fpsp = -1;
	vector<int> fpstack;
	vector<StackValues*> rstack;
	// StackValues* newStack = new StackValues();
	// rstack.push_back(newStack);
	int pc = 0;
	unsigned int i;
	MemoryObject* theOne[inputSize];
	// cout << inputSize << endl;
	MemoryObject* newOne;

	// for (i = 0; i < inputSize; i++) {
	// 	cout << (int)memory[i] << endl;
	// }

	for (i = 0; i < inputSize; i++) {

		if (memory[i] == 132) {
			theOne[i] = new Cmpe();
		}

		else if (memory[i] == 136) {
			theOne[i] = new Cmplt();
		}

		else if (memory[i] == 140) {
			theOne[i] = new Cmpgt();
		}

		else if (memory[i] == 36) {
			theOne[i] = new Jmp();
		}

		else if (memory[i] == 40) {
			theOne[i] = new Jmpc();
		}

		else if (memory[i] == 44) {
			theOne[i] = new Call();
		}

		else if (memory[i] == 48) {
			theOne[i] = new Ret();
		}

		else if (memory[i] == 68) {
			theOne[i] = new Pushc();
			theOne[++i] = new Char();
			theOne[i]->c = memory[i];
		}
		else if (memory[i] == 69) {
			theOne[i] = new Pushs();
			theOne[++i] = new Short();

			short shortBytes;
			memcpy(&shortBytes, memory + i * sizeof(char), sizeof(short));

			theOne[i]->s = shortBytes;
			theOne[++i] = new Short(true);
		}
		else if (memory[i] == 70) {
			theOne[i] = new Pushi();
			theOne[++i] = new Int();

			// for (i = i; i < i + 4; i++) {
			// 	cout << (int)memory[i] << endl;
			// }
	
			// cout << integer << endl;

			int integer;
			memcpy(&integer, memory + i * sizeof(char), sizeof(int));

			// memcpy(&integer1, test, sizeof(int));
			// cout << "int: " << integer << endl;
			
			theOne[i]->i = integer;
			theOne[++i] = new Int(true);
			theOne[++i] = new Int(true);
			theOne[++i] = new Int(true);
		}
		else if (memory[i] == 71) {
			theOne[i] = new Pushf();
			theOne[++i] = new Float();


			// float floatByte = (float)((unsigned char)(memory[pc]) << 24 |
			// 					(unsigned char)(memory[pc + 1] << 16) |
			// 					(unsigned char)(memory[pc + 2] << 8) |
			// 					(unsigned char)(memory[pc + 3]));

			float floatByte;
			memcpy(&floatByte, memory + i * sizeof(char), sizeof(float));

			theOne[i]->f = floatByte;
			theOne[++i] = new Float(true);
			theOne[++i] = new Float(true);
			theOne[++i] = new Float(true);
		}

		else if (memory[i] == 72) {
			theOne[i] = new Pushvc();
		}

		else if (memory[i] == 73) {
			theOne[i] = new Pushvs();
		}

		else if (memory[i] == 74) {
			theOne[i] = new Pushvi();
		}

		else if (memory[i] == 75) {
			theOne[i] = new Pushvf();
		}

		else if (memory[i] == 76) {
			theOne[i] = new Popm();
		}

		else if (memory[i] == 80) {
			theOne[i] = new Popv();
		}

		else if (memory[i] == 77) {
			theOne[i] = new Popa();
		}

		else if (memory[i] == 84) {
			theOne[i] = new Peekc();
		}

		else if (memory[i] == 85) {
			theOne[i] = new Peeks();
		}

		else if (memory[i] == 86) {
			theOne[i] = new Peeki();
		}

		else if (memory[i] == 87) {
			theOne[i] = new Peekf();
		}

		else if (memory[i] == 88) {
			theOne[i] = new Pokec();
		}

		else if (memory[i] == 89) {
			theOne[i] = new Pokes();
		}

		else if (memory[i] == 90) {
			theOne[i] = new Pokei();
		}

		else if (memory[i] == 91) {
			theOne[i] = new Pokef();
		}

		else if (memory[i] == 94) {
			theOne[i] = new Swp();
		}

		else if (memory[i] == 100) {
			newOne = new Add();
			theOne[i] = newOne;
		}

		else if (memory[i] == 104) {
			theOne[i] = new Sub();
		}

		else if (memory[i] == 108) {
			theOne[i] = new Mul();
		}

		else if (memory[i] == 112) {
			theOne[i] = new Div();
		}

		else if (memory[i] == 144) {
			theOne[i] = new Printc();
		}

		else if (memory[i] == 145) {
			theOne[i] = new Prints();
		}

		else if (memory[i] == 146) {
			theOne[i] = new Printi();
		}

		else if (memory[i] == 147) {
			theOne[i] = new Printf();
		}

		else if (memory[i] == 0) {
			newOne = new Halt();
			theOne[i] = newOne;
			// theOne[i] = new Halt();
			// cout << "halted " << i << endl;
		}
	}

	StackValues* newStack;
	// cout << "BREAK" << endl;
	pc = 0;
	int flag = 1;

	// while(pc != -1 && count < 15) {
	while (flag) {
		// cout << "memory[" << pc << "] : " << int(memory[pc]) <<endl;
		if (memory[pc] == 68) {
			newStack = new StackValues(theOne[pc + 1]->getChar());
			rstack.push_back(newStack);
			// cout << "HELLO " << (int)newStack->c << endl;
			// cout << "HELLO " << (int)theOne[pc + 1]->getChar() << endl;
			sp += 1;
			pc += 2;
		}
		else if (memory[pc] == 69) {
			newStack = new StackValues(theOne[pc + 1]->getShort());
			rstack.push_back(newStack);
			sp += 1;
			pc += 3;
		}
		else if (memory[pc] == 70) {
			newStack = new StackValues(theOne[pc + 1]->getInt());
			rstack.push_back(newStack);
			pc += 5;
			sp += 1;
			// cout << "PC: " << pc << endl;
		}
		else if (memory[pc] == 71) {
			newStack = new StackValues(theOne[pc + 1]->getFloat());
			rstack.push_back(newStack);
			pc += 5;
			sp += 1;
		}
		else {
			pc = theOne[pc]->execute(rstack, fpstack, sp, fpsp, pc, flag);
		}
		// count++;
		// if (!rstack.empty()) {
		// 	if (rstack.back()->type == 'c') {
		// 		cout << "rstack[" << sp <<"]= " << (int) rstack.back()->c << endl;
		// 	}
		// 	else if (rstack.back()->type == 's') {
		// 		cout << "rstack[" << sp <<"]= " << rstack.back()->s << endl;
		// 	}
		// 	else if (rstack.back()->type == 'i') {
		// 		cout << "rstack[" << sp <<"]= " << rstack.back()->i << endl;
		// 	}
		// 	else if (rstack.back()->type == 'f') {
		// 		cout << "rstack[" << sp <<"]= " << rstack.back()->f << endl;
		// 	}
		// }
		// cout << "pc = " << pc << endl;
	}


	// int k;
	// for (k =0; k< inputSize ; k++) {
	// 	cout << "memory[" << k << "] : " << int(memory[k]) <<endl;
	// }

	// cout << rstack.size() << endl;
	// cout << "OUT OF THE LOOP" << endl;

	cout << endl;
	cout << "PC: " << pc << endl;
	cout << "sp: " << sp << endl;
	if (rstack.empty()) {
		cout << "rstack: empty" << endl;
	}
	else {
		for (i = 0; i < rstack.size(); i++) {
			if (rstack[i]->type == 'c') {
				cout << "rstack[" << i <<"]= " << rstack[i]->c << endl;
			}
			else if (rstack[i]->type == 's') {
				cout << "rstack[" << i <<"]= " << rstack[i]->s << endl;
			}
			else if (rstack[i]->type == 'i') {
				cout << "rstack[" << i <<"]= " << rstack[i]->i << endl;
			}
			else if (rstack[i]->type == 'f') {
				cout << "rstack[" << i <<"]= " << rstack[i]->f << endl;
			}
		}
	}
	cout << "fpsp: " << fpsp << endl;
	if (fpstack.empty()) {
		cout << "fpstack: empty" << endl;
	}
	else {
		for (i = 0; i < fpstack.size(); i++) {
			cout << "fpstack[" << i <<"]= " << fpstack[i] << endl;
		}
	}

	fclose(inputF);
	free(memory);

	return 0;
}

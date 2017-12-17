#include <iostream>
#include <string>
#include "MyDll.h"

typedef void(*FUNC_POINTER)(char *);
typedef void(*FUNC_POINTER2)(NumJ s);

void callback1(char* s) {
	printf("%s\n", s);
}

void callback2(NumJ s) {
	std::cout << "callback2: " << s << std::endl;
}

void func(char *s, FUNC_POINTER p) {
	p(s);
}

//void func2(Status s) {
//	MyDll::sStatus = Status::Processing;
//}

int main() {
	int i = MyDll::Plus2(1);
	std::cout << i << std::endl;
}
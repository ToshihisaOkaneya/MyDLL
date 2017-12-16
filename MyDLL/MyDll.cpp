//#define MYDLL_EXPORTS
#include "MyDll.h"
#include <iostream>
#include <string>

MyDll::MyDll()
{
}

MyDll::~MyDll()
{
}

// boolŒ^‚ğ‹t‚É•ÏŠ·
bool MyDll::ChangeBool(bool b) {
	return !b;
}

// ó‚¯æ‚Á‚½int‚É2‚ğ‰ÁZ‚µ‚Ä•Ô‚·
int MyDll::Plus2(int i) {
	return i + 2;
}

std::string MyDll::PlusQuotation(std::string s) {
	return "u" + s + "v";
}

//void MyDll::CallFunc(FUNC_POINT func) {
//	func(status1);
//}
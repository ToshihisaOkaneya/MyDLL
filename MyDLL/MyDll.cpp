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

// bool�^���t�ɕϊ�
bool MyDll::ChangeBool(bool b) {
	return !b;
}

// return i + 2
int MyDll::Plus2(int i) {
	return i + 2;
}

std::string MyDll::PlusQuotation(std::string s) {
	return "�u" + s + "�v";
}

NumJ MyDll::GetEnum() {
	return NumJ::San;
}

void MyDll::CallFunc(FUNC_POINT func) {

}
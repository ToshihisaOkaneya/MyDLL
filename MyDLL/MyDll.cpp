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

// �󂯎����int��2�����Z���ĕԂ�
int MyDll::Plus2(int i) {
	return i + 2;
}

std::string MyDll::PlusQuotation(std::string s) {
	return "�u" + s + "�v";
}

//void MyDll::CallFunc(FUNC_POINT func) {
//	func(status1);
//}
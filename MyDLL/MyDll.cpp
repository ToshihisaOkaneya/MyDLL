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

// bool型を逆に変換
bool MyDll::ChangeBool(bool b) {
	return !b;
}

// 受け取ったintに2を加算して返す
int MyDll::Plus2(int i) {
	return i + 2;
}

std::string MyDll::PlusQuotation(std::string s) {
	return "「" + s + "」";
}

//void MyDll::CallFunc(FUNC_POINT func) {
//	func(status1);
//}
#include "MyDll.h"
#include <exception>
#include <fstream>
#include <iostream>
#include <string>
#include <Windows.h>

FUNC_POINT MyDll::cb;

MyDll::MyDll()
{
}

MyDll::~MyDll()
{
}

// boolå^ÇãtÇ…ïœä∑
bool MyDll::ChangeBool(bool b) {
	return !b;
}

// return i + 2
int MyDll::Plus2(int i) {
	return i + 2;
}

std::string MyDll::PlusQuotation(std::string s) {
	return "Åu" + s + "Åv";
}

NumJ MyDll::GetEnum() {
	return NumJ::San;
}	

void MyDll::SetCallback(FUNC_POINT cb) {
	MyDll::cb = cb;
}

void MyDll::SetNi() {
	cb(NumJ::Ni);
}

void MyDll::SetSan() {
	cb(NumJ::San);
}

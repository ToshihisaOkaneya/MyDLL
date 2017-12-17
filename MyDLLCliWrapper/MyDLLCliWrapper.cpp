#include "MyDLLCliWrapper.h"
#include <iostream>
#using <mscorlib.dll>
using namespace MyDllWrapper;

MyDLLCliWrapper::MyDLLCliWrapper()
{
}

bool MyDLLCliWrapper::ChangeBool(bool b) {
	return MyDll::ChangeBool(b);
}

int MyDLLCliWrapper::Plus2(int i) {
	return MyDll::Plus2(i);
}

System::String^ MyDLLCliWrapper::PlusQuotation(System::String^ s) {
	return "Åu" + s + "Åv";
}

NumE MyDLLCliWrapper::GetEnum() {
	return safe_cast<NumE>(MyDll::GetEnum());
}

void MyDLLCliWrapper::CallFunc(FUNC_POINT fp) {
	MyDll::CallFunc(fp);
}

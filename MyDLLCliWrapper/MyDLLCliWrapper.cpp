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

System::String^ MyDLLCliWrapper::PlusKakko(System::String^ s) {
	return "Åu" + s + "Åv";
}

NumE MyDLLCliWrapper::GetEnum() {
	return safe_cast<NumE>(MyDll::GetEnum());
}

void MyDLLCliWrapper::CallbackForCpp(NumJ num) {
	Del(safe_cast<NumE>(num));
}

void MyDLLCliWrapper::SetCallback(CbDel^ del) {
	MyDLLCliWrapper::Del = del;
	FUNC_POINT fp = (FUNC_POINT)CallbackForCpp;
	MyDll::SetCallback(fp);
}

void MyDLLCliWrapper::SetTwo() {
	MyDll::SetNi();
}

void MyDLLCliWrapper::SetThree() {
	MyDll::SetSan();
}

System::String^ MyDLLCliWrapper::ReadFile() {
	return gcnew System::String(MyDll::ReadFile().c_str());
}
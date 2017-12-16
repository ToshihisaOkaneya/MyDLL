#include <iostream>
#include "MyDLLCliWrapper.h"
using namespace MyDllWrapper;

int main() {
	std::cout << MyDLLCliWrapper::ChangeBool(true) << std::endl;
	std::cout << MyDLLCliWrapper::Plus2(1) << std::endl;
	System::Console::WriteLine(MyDLLCliWrapper::PlusQuotation("test"));
}
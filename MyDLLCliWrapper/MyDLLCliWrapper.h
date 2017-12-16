#pragma once
#include "MyDll.h"
#include <iostream>
#using <mscorlib.dll>

namespace MyDllWrapper {
	public ref class MyDLLCliWrapper
	{
	private:
		MyDLLCliWrapper();
	public:
		static bool ChangeBool(bool b);
		static int Plus2(int i);
		static System::String^ PlusQuotation(System::String^ s);
		//static void CallFunc(FUNC_POINT fp);
	};
}

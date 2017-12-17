#pragma once
#include <iostream>
#using <mscorlib.dll>
#include "MyDll.h"

namespace MyDllWrapper {
	public enum class NumE {
		Zero,
		One,
		Two,
		Three
	};

	public ref class MyDLLCliWrapper
	{
	private:
		MyDLLCliWrapper();
	public:
		static bool ChangeBool(bool b);
		static int Plus2(int i);
		static System::String^ PlusQuotation(System::String^ s);
		static NumE GetEnum();
		static void CallFunc(FUNC_POINT fp);
	};
}

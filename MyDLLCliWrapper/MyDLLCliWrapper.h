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

	public delegate void CbDel(NumE num);

	public ref class MyDLLCliWrapper
	{
	private:
		MyDLLCliWrapper();
		static CbDel^ Del;
		static NumE Num;
		static void CallbackForCpp(NumJ num);
	public:
		static bool ChangeBool(bool b);
		static int Plus2(int i);

		static System::String^ PlusKakko(System::String^ s);
		static NumE GetEnum();
		static void SetCallback(CbDel^ del);
		static void SetTwo();
		static void SetThree();
	};
}

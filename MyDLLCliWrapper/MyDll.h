#pragma once
#include <string>

#ifdef MYDLL_EXPORTS
#define MYDLL_API __declspec(dllexport) 
#else
#define MYDLL_API __declspec(dllimport) 
#endif

enum NumJ {
	Zero,
	Ichi,
	Ni,
	San
};

typedef void(*FUNC_POINT)(NumJ s);

class MyDll
{
public:
	static MYDLL_API bool ChangeBool(bool b);
	static MYDLL_API int Plus2(int i);
	static MYDLL_API std::string PlusQuotation(std::string s);
	static MYDLL_API NumJ GetEnum();
	static MYDLL_API void CallFunc(FUNC_POINT fp);
private:
	MyDll();
	~MyDll();
};

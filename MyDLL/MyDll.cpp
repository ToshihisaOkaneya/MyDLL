#include "MyDll.h"
#include <fstream>
#include <iostream>
//#include <processenv.h>
#include <string>
#include <Windows.h>

FUNC_POINT MyDll::cb;

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

// return i + 2
int MyDll::Plus2(int i) {
	return i + 2;
}

std::string MyDll::PlusQuotation(std::string s) {
	return "�u" + s + "�v";
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

std::string MyDll::ReadFile() {
	//char cdir[255] = {};
	//GetCurrentDirectory(255, cdir);
	// ���s�t�@�C���̃t���p�X�擾
	WCHAR szPath[_MAX_PATH];
	GetModuleFileName(NULL, szPath, _MAX_PATH);
	std::cout << szPath << std::endl;

	std::ifstream ifs("testMessage.txt");
	std::string line;
	if (ifs.fail())
	{
		//TODO: native C++ ����C#�֗�O��������@�ɂ��Č���
		std::cerr << "���s" << std::endl;
		return "failed";
	}
	getline(ifs, line);

	return line;
}
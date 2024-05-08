#include "collect_file.h"
int Ccollect_file::my_init(void *p)
{
	this->name = "Ccollect_file";
	this->alias = "collect_file";
	return 0;
}

Ccollect_file::Ccollect_file()
{
	this->my_init();
#if WINDOWS_OS
	this->to_dir   = L".";
	this->from_dir = L"."; 
	this->term = L"";
#endif

#if LINUX_OS
	this->to_dir = (char *)".";
	this->from_dir = (char *)".";
	this->term = (char *)"";
#endif
}

Ccollect_file::~Ccollect_file()
{

}

#if WINDOWS_OS
int Ccollect_file::func(void* p)
{
	int ret_error = 0;
//	AT_LINE;
	_tprintf(TEXT("%s\n"), (TCHAR*)p);

	wstring file_path = (TCHAR*)p;
	wstring cmd = L"copy /B /V /Y \"" + file_path + L"\"    \"" + this->to_dir + L"\\\"";

	std::wcout << L"run command:" << cmd << endl;
	if (0 != this->sys_cmd((wstring *) & cmd))
	{
		std::wcout << L"Error Command:" << cmd << endl;
		ret_error++;
	}

	return ret_error;
}
#endif

#if LINUX_OS
int Ccollect_file::func(void* p)
{
	AT_LINE;

	return 0;
}
#endif

int Ccollect_file::collect(dir_t* dir , file_t* term , dir_t* to_dir)
{
	Cpath p;

	if (dir == nullptr) { dir = this->from_dir; }
	if (term == nullptr) { term = this->term; }
	if (to_dir != nullptr) { this->to_dir = to_dir; }

	p.list(dir, term, 0, 1, 1);	//int Cpath::list(DIR_T *dir_name,DIR_T *term,int display,int to_list, int recursive)
	//p.display();//test ok
	p.execute(this);
	return 0;
}

#ifndef COLLECT_FILE_TEST
#define COLLECT_FILE_TEST 0//1
#endif

#if COLLECT_FILE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;
	Ccollect_file collect_file;

#if WINDOWS_OS
	collect_file.collect(L"..\\..\\src", L".h", L"..\\..\\include");
#endif

#if LINUX_OS
	collect_file.collect((dir_t*)".", (file_t*)".h");
#endif

	return 0;
}
#endif

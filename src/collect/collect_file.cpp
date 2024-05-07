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
}

Ccollect_file::~Ccollect_file()
{

}

#ifndef COLLECT_FILE_TEST
#define COLLECT_FILE_TEST 0//1
#endif

#if COLLECT_FILE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;
#if WINDOWS_OS
	DIR_T* dir = L"../../src";//windows dir 
	DIR_T* term = L".h"; //cllect .h file to name list
#endif

#if LINUX_OS
	DIR_T* dir = (DIR_T*)".";//linux dir 
	DIR_T* term = (char*)".cpp";
#endif

	Cpath p;
	//int Cpath::list(DIR_T *dir_name,DIR_T *term,int display,int to_list, int recursive)
	p.list(dir, term, 0,1,1);
	p.display();

	return 0;
}
#endif

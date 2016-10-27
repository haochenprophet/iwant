#ifndef OS_H 
#define OS_H 

#if WINDOWS_OS
#include <windows.h>
#endif//WINDOWS_OS

#include "object.h"

class Cos:public Object
{
public:
	Cos();
	~Cos();

#if WINDOWS_OS
	int init_winsock();
	void exit_winsock();
#endif//WINDOWS_OS	
};

#endif//end OS_H 
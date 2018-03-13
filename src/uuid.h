#ifndef UUID_H 
#define UUID_H

#include <stdio.h>
#include <iostream>
#include <string>

#if LINUX_OS
#include <uuid/uuid.h>  //sudo apt-get install uuid-dev
#endif

#if WINDOWS_OS
#include <objbase.h>
#endif

#define GUID_LEN 64  
#define UUID_FORMAT "%08X%04X%04X%02X%02X%02X%02X%02X%02X%02X%02X"

typedef union{
	struct{
		unsigned int   Data1;
		unsigned short Data2;
		unsigned short Data3;
		unsigned char  Data4[ 8 ];
	}guid;
	unsigned char uuid[16];
}UUID_U;

namespace n_uuid {
	class Cuuid
	{
	public:
		std::string uuid;
	public:
		Cuuid();
		~Cuuid();
		int create();
	};
}
using namespace n_uuid;

#endif
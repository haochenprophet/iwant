#ifndef UUID_H 
#define UUID_H

#include <stdio.h>
#include <iostream>
using namespace std;

#define GUID_LEN 64  

#if LINUX_OS
#include <uuid/uuid.h>  //sudo apt-get install uuid-dev
typedef uuid_t UUID_T;
#endif

#if WINDOWS_OS
#include <objbase.h>
typedef GUID UUID_T;
#endif

namespace n_uuid {
	class Cuuid
	{
	public:
		UUID_T uuid;
	public:
		Cuuid();
		~Cuuid();
		int create(UUID_T * uuid);
		int create();
		void display(UUID_T * uuid);
		void display();		
	};
}
using namespace n_uuid;

#endif
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
		int create();
		int cmp(UUID_T * uuid);//0 ==, -1<  1>
		int cmp(Cuuid * uuid);//0 ==, -1<  1>
		bool operator == (Cuuid& uuid);
		bool operator != (Cuuid& uuid);
		bool operator > (Cuuid& uuid);
		bool operator < (Cuuid& uuid);
		bool operator >= (Cuuid& uuid);
		bool operator <= (Cuuid& uuid);
		void display(UUID_T * uuid);
		void display();	
		int test();
	};
}
using namespace n_uuid;

#endif
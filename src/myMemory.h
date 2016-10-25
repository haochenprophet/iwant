#ifndef MYMEMORY_H
#define MYMEMORY_H

#include "object.h"

namespace n_my_memory {
	class CmyMemory:public Object
	{
	public:
		char *addr;//by byte memory 
		int size;
		int type;//0 is no type
	public:
		CmyMemory();
		CmyMemory(int size); 
		~CmyMemory();
		void *allot(int size=0,int type=0);
		bool isMe(void * addr = NULL, long id = 0,string name=""); 
		void delete_me();
	};
}
using namespace n_my_memory;

#endif
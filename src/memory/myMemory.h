#ifndef MYMEMORY_H
#define MYMEMORY_H

#include "object/object.h"

enum MyMemoryType  
{
	None_T,
	Data_T,
	FileData_T,
};

#define MY_MEMORY_REALLOT	1

namespace n_my_memory {
	class CmyMemory:public Object
	{
		int allot_flag;
	public:
		char *addr;//by byte memory 
		size_t size;
		int type;//0 is no type
	public:
		int my_init(void *p=nullptr);
		CmyMemory();
		CmyMemory(int size); 
		~CmyMemory();
		void *allot(size_t size=0,int type=0,int re_allot=0);//MY_MEMORY_REALLOT
		bool isMe(void * addr = nullptr, long id = 0,string name=""); 
		void delete_me();
		int set_addr(char *start,char *end,int type=0);
		int set_addr(char *start,int size,int type=0);
		char * begin();
		char * end();
	};
}
using namespace n_my_memory;

#endif

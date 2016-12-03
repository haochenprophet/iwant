#ifndef MYMEMORY_H
#define MYMEMORY_H

#include "object.h"

enum MyMemoryType  
{
	None_T,
	Data_T,
	FileData_T,
};

namespace n_my_memory {
	class CmyMemory:public Object
	{
		int allot_flag;
	public:
		char *addr;//by byte memory 
		int size;
		int type;//0 is no type
	public:
		int my_init(void *p=NULL);
		CmyMemory();
		CmyMemory(int size); 
		~CmyMemory();
		void *allot(int size=0,int type=0);
		bool isMe(void * addr = NULL, long id = 0,string name=""); 
		void delete_me();
		int set_addr(char *start,char *end);
		int set_addr(char *start,int size);

	};
}
using namespace n_my_memory;

#endif
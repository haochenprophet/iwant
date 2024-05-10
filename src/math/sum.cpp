#include "sum.h"
#include "file/file.h"
int Csum::my_init(void *p)
{
	this->name = "Csum";
	this->alias = "sum";
	return 0;
}

Csum::Csum()
{
	this->my_init();
}

Csum::~Csum()
{

}

size_t Csum::byte(void * data, size_t size) //byte + sum
{
	size_t n,result=0;
	for (n = 0; n < size; n++)
	{
		result += ((unsigned char*)data)[n];
	}
	return result;
}
//ret 0 sucess  <0 -1 :do nothing >0 1 error:
int Csum::byte(char* filename, size_t* result)//output check sum to result
{
	Cfile file;
	if (0 != file.f_read(filename)) { return -1; }
	* result=this->byte((void*)file.addr, (size_t)file.size);
	return 0;
}

#ifndef SUM_TEST
#define SUM_TEST 0//1
#endif

#if SUM_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif

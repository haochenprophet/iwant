#include "test.h"
int Ctest::my_init(void *p)
{
	this->name = "Ctest";
	this->alias = "test";
	return 0;
}

Ctest::Ctest()
{
	this->my_init();
}

Ctest::~Ctest()
{

}

#ifndef TEST_TEST
#define TEST_TEST 0//1
#endif

#if TEST_TEST
#include "all_h_include.h"
#include "g_code.h"
int main(int argc, char *argv[])
{
	cout << "TEST_TEST\n\n";
    //cout<<1000000000000/(400*1024*1024)<<endl;
	Ctest test;
	add_objects(&test);
	test.my_family();
	test.execute((Object *)&test,(char *) "Cmake",(char *) nullptr);
	return 0;
}
#endif 
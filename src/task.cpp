#include "task.h"

Ctask::Ctask()
{
	this->name = "Ctask";
	this->alias = "task";
}


#ifndef TASK_TEST
#define TASK_TEST 0//1
#endif

#if TASK_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	cout << "TASK_TEST\n\n";

	return 0;
}
#endif 
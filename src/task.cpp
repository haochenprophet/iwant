#include "task.h"

Ctask::Ctask()
{
	this->name = "Ctask";
	this->name += std::to_string(this->id);
	this->alias = "task";
}

int Ctask::t_break(Object *t)
{
	t->status=TaskBreak;
	return this->status;
}

int Ctask::t_continue(Object *t)
{
	t->status=TaslContinue;
	return this->status;
}

int Ctask::t_stop(Object *t)
{
	t->status=TaskStopping;
	return this->status;
}

int Ctask::t_run(Object *t)
{
	t->status=TaskRunning;
	return this->status;
}

int Ctask::t_pend(Object *t)
{
	t->status=TaskPending;
	return this->status;
}

int Ctask::t_complete(Object *t)
{
	t->status=TaskComplete;
	return this->status;
}

int Ctask::add_depend(Ctask * t)
{
	this->depend.push_back((void *)t);
	return 0;
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

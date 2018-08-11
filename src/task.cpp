#include "task.h"

Ctask::Ctask()
{
	this->name = "Ctask";
	this->name += std::to_string(this->id);
	this->alias = "task";
}

Ctask::~Ctask()
{
	this->free_task_list();
	this->depend.clear();
}

int Ctask::t_break(Object *t)
{
	t->status.data.i=(int)TaskBreak;
	return (int)TaskBreak;
}

int Ctask::t_continue(Object *t)
{
	t->status.data.i= (int)TaskContinue;
	return (int)TaskContinue;
}

int Ctask::t_stop(Object *t)
{
	t->status.data.i= (int)TaskStopping;
	return (int)TaskStopping;
}

int Ctask::t_run(Object *t)
{
	t->status.data.i= (int)TaskRunning;
	return (int)TaskRunning;
}

int Ctask::t_pend(Object *t)
{
	t->status.data.i= (int)TaskPending;
	return (int)TaskPending;
}

int Ctask::t_complete(Object *t)
{
	t->status.data.i= (int)TaskComplete;
	return (int)TaskComplete;
}

int Ctask::add_depend(Ctask * t)
{
	this->depend.push_back(t);
	return 0;
}

Ctask * Ctask::create(Ctask *depend,char *name,char *desp,int task_count)
{
	Ctask *t =new Ctask();
	if(!t) return nullptr;

	if(name) t->name=name;
	if(desp) t->description=desp;

	this->task_list.push_back(t);
	if(depend) this->depend.push_back(depend);
	this->count=task_count;//Object::count

	return t;
}

void Ctask::free_task_list() //for delete Ctask::create(char *p) task
{
	Ctask *t;
	while (!this->task_list.empty())
	{
		t =this->task_list.back();
		delete t;
		this->task_list.pop_back();
	}
}

#ifndef TASK_TEST
#define TASK_TEST 0//1
#endif

#if TASK_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TASK_TEST\n\n";
	Ctask t,*p;
	p=t.create(&t,(char *)"sub-task",(char *) "test-sub-task");
	t.display();
	p->display();
	return 0;
}
#endif 

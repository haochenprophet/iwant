#ifndef IWANT_TASK_H
#define IWANT_TASK_H

#include "object/object.h"

enum TaskStatus{
	TaskPlanning,
	TaskStopping,
	TaskRunning,
	TaskPending,
	TaskComplete,
	TaskContinue,
	TaskBreak,
};

namespace n_task {
	class Ctask :public Object
	{
	public:
		std::list<Ctask *> depend;
		std::list<Ctask *> task_list;//my create() task list
	public:
		Ctask();
		~Ctask();
		int t_break(Object *t);
		int t_continue(Object *t);
		int t_stop(Object *t);
		int t_run(Object *t);
		int t_pend(Object *t);
		int t_complete(Object *t);
		int add_depend(Ctask * t);
		Ctask *create(Ctask *depend=nullptr,char *name=nullptr,char *desp=nullptr,int task_count=1);
		void free_task_list();
	};

}
using namespace n_task;

typedef std::list<Ctask *> LIST_DEPEND;//family list type

#endif

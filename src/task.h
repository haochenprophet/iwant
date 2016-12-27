#ifndef TASK_H
#define TASK_H

#include "object.h"
typedef list<void *> LIST_DEPEND;//family list type

enum TaskStatus{
	TaskPlanning,
	TaskStopping,
	TaskRunning,
	TaskPending,
	TaskComplete,
	TaslContinue,
	TaskBreak,
};

namespace n_task {
	class Ctask :public Object
	{
	public:
		LIST_DEPEND depend;
		list<Ctask *> task_list;//my create() task list
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
		Ctask *create(char *p=nullptr);//creat and push task_list
		void free_task_list();
	};

}
using namespace n_task;

#endif

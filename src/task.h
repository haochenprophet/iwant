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
	public:
		Ctask();
		int t_break(Object *t);
		int t_continue(Object *t);
		int t_stop(Object *t);
		int t_run(Object *t);
		int t_pend(Object *t);
		int t_complete(Object *t);
		int add_depend(Ctask * t);
	};

}
using namespace n_task;

#endif

#ifndef TASK_H
#define TASK_H

#include "object.h"
typedef list<void *> LIST_DEPEND;//family list type

namespace n_task {
	class Ctask :public Object
	{
	public:
		LIST_DEPEND depend;
	public:
		Ctask();
	};

}
using namespace n_task;

#endif
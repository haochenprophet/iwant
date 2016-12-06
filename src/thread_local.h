#ifndef THREAD_LOCAL_H
#define THREAD_LOCAL_H

#include "object.h"

namespace n_thread_local {
	class Cthread_local :public Object
	{
	public:
		Cthread_local();
		int my_init(void *p=NULL);
	};
}

using namespace n_thread_local;

#endif

#ifndef THREAD_H
#define THREAD_H

#include "object.h"

namespace n_thread {
	class Cthread :public Object
	{
	public:
		Cthread();
		int my_init(void *p=nullptr);
	};
}

using namespace n_thread;

#endif

#ifndef TASK_H
#define TASK_H

#include "object.h"

namespace n_tag {
	class Ctag :public Object
	{
	public:
		Ctag();
		int func(void *p = NULL); // callback function
	};

}
using namespace n_tag;

#endif
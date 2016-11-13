#ifndef RUN_H
#define RUN_H

#include "object.h"

namespace n_run {
	class Crun :public Object
	{
	public:
		Crun();
		int func(void *p=NULL);
	};

}
using namespace n_run;

#endif

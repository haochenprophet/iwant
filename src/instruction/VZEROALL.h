#ifndef VZEROALL_H
#define VZEROALL_H

#include "object.h"

namespace n_VZEROALL {
	class CVZEROALL :public Object
	{
	public:
		CVZEROALL();
		~CVZEROALL();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VZEROALL;

#endif

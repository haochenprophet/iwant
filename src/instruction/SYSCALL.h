#ifndef SYSCALL_H
#define SYSCALL_H

#include "../object.h"

namespace n_SYSCALL {
	class CSYSCALL :public Object
	{
	public:
		CSYSCALL();
		~CSYSCALL();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SYSCALL;

#endif

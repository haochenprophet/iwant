#ifndef AT_QUICK_EXIT_H
#define AT_QUICK_EXIT_H

#include "object/object.h"

namespace n_at_quick_exit {
	class Cat_quick_exit :public Object
	{
	public:
		Cat_quick_exit();
		~Cat_quick_exit();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cat_quick_exit); }
		static int at_quick_exit_c(void (*func)(void));
	};
}

using namespace n_at_quick_exit;

#endif

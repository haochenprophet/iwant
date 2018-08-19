#ifndef AT_QUICK_EXIT_H
#define AT_QUICK_EXIT_H

#include "../object.h"

namespace n_at_quick_exit {
	class Cat_quick_exit :public Object
	{
	public:
		Cat_quick_exit();
		~Cat_quick_exit();
		int my_init(void *p=nullptr);
	};
}

using namespace n_at_quick_exit;

#endif

#ifndef QUICK_EXIT_H
#define QUICK_EXIT_H

#include "../object.h"

namespace n_quick_exit {
	class Cquick_exit :public Object
	{
	public:
		Cquick_exit();
		~Cquick_exit();
		int my_init(void *p=nullptr);
	};
}

using namespace n_quick_exit;

#endif

#ifndef RENAME_H
#define RENAME_H

#include "../object.h"

namespace n_rename {
	class Crename :public Object
	{
	public:
		Crename();
		~Crename();
		int my_init(void *p=nullptr);
	};
}

using namespace n_rename;

#endif

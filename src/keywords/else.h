#ifndef ELSE_H
#define ELSE_H

#include "../object.h"

namespace n_else {
	class Celse :public Object
	{
	public:
		Celse();
		int my_init(void *p=nullptr);
	};
}

using namespace n_else;

#endif

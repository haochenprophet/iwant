#ifndef ENUM_H
#define ENUM_H

#include "../object.h"

namespace n_enum {
	class Cenum :public Object
	{
	public:
		Cenum();
		int my_init(void *p=nullptr);
	};
}

using namespace n_enum;

#endif

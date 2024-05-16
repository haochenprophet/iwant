#ifndef PUNPCKLWD_H
#define PUNPCKLWD_H

#include "object/object.h"

namespace n_PUNPCKLWD {
	class CPUNPCKLWD :public Object
	{
	public:
		CPUNPCKLWD();
		~CPUNPCKLWD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PUNPCKLWD;

#endif

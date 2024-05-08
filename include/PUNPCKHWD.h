#ifndef PUNPCKHWD_H
#define PUNPCKHWD_H

#include "../object.h"

namespace n_PUNPCKHWD {
	class CPUNPCKHWD :public Object
	{
	public:
		CPUNPCKHWD();
		~CPUNPCKHWD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PUNPCKHWD;

#endif

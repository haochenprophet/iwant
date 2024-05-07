#ifndef PUSHFD_H
#define PUSHFD_H

#include "../object.h"

namespace n_PUSHFD {
	class CPUSHFD :public Object
	{
	public:
		CPUSHFD();
		~CPUSHFD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PUSHFD;

#endif

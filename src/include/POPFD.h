#ifndef POPFD_H
#define POPFD_H

#include "../object.h"

namespace n_POPFD {
	class CPOPFD :public Object
	{
	public:
		CPOPFD();
		~CPOPFD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_POPFD;

#endif

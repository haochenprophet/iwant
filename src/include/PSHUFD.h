#ifndef PSHUFD_H
#define PSHUFD_H

#include "../object.h"

namespace n_PSHUFD {
	class CPSHUFD :public Object
	{
	public:
		CPSHUFD();
		~CPSHUFD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSHUFD;

#endif

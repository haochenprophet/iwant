#ifndef SHUFPD_H
#define SHUFPD_H

#include "../object.h"

namespace n_SHUFPD {
	class CSHUFPD :public Object
	{
	public:
		CSHUFPD();
		~CSHUFPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SHUFPD;

#endif

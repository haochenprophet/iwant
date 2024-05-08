#ifndef ROUNDPD_H
#define ROUNDPD_H

#include "../object.h"

namespace n_ROUNDPD {
	class CROUNDPD :public Object
	{
	public:
		CROUNDPD();
		~CROUNDPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ROUNDPD;

#endif

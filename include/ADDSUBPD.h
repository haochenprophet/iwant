#ifndef ADDSUBPD_H
#define ADDSUBPD_H

#include "../object.h"

namespace n_ADDSUBPD {
	class CADDSUBPD :public Object
	{
	public:
		CADDSUBPD();
		~CADDSUBPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ADDSUBPD;

#endif

#ifndef ADDPD_H
#define ADDPD_H

#include "../object.h"

namespace n_ADDPD {
	class CADDPD :public Object
	{
	public:
		CADDPD();
		~CADDPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ADDPD;

#endif

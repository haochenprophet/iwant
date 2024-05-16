#ifndef HADDPD_H
#define HADDPD_H

#include "object/object.h"

namespace n_HADDPD {
	class CHADDPD :public Object
	{
	public:
		CHADDPD();
		~CHADDPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_HADDPD;

#endif

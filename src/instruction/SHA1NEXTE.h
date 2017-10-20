#ifndef SHA1NEXTE_H
#define SHA1NEXTE_H

#include "object.h"

namespace n_SHA1NEXTE {
	class CSHA1NEXTE :public Object
	{
	public:
		CSHA1NEXTE();
		~CSHA1NEXTE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SHA1NEXTE;

#endif

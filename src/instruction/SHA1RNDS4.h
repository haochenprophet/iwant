#ifndef SHA1RNDS4_H
#define SHA1RNDS4_H

#include "object.h"

namespace n_SHA1RNDS4 {
	class CSHA1RNDS4 :public Object
	{
	public:
		CSHA1RNDS4();
		~CSHA1RNDS4();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SHA1RNDS4;

#endif

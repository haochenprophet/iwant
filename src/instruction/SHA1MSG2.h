#ifndef SHA1MSG2_H
#define SHA1MSG2_H

#include "object.h"

namespace n_SHA1MSG2 {
	class CSHA1MSG2 :public Object
	{
	public:
		CSHA1MSG2();
		~CSHA1MSG2();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SHA1MSG2;

#endif

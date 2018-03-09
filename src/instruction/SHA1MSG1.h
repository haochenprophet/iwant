#ifndef SHA1MSG1_H
#define SHA1MSG1_H

#include "../object.h"

namespace n_SHA1MSG1 {
	class CSHA1MSG1 :public Object
	{
	public:
		CSHA1MSG1();
		~CSHA1MSG1();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SHA1MSG1;

#endif

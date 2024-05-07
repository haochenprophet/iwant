#ifndef SHA256RNDS2_H
#define SHA256RNDS2_H

#include "../object.h"

namespace n_SHA256RNDS2 {
	class CSHA256RNDS2 :public Object
	{
	public:
		CSHA256RNDS2();
		~CSHA256RNDS2();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SHA256RNDS2;

#endif

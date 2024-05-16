#ifndef SUBSS_H
#define SUBSS_H

#include "object/object.h"

namespace n_SUBSS {
	class CSUBSS :public Object
	{
	public:
		CSUBSS();
		~CSUBSS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SUBSS;

#endif

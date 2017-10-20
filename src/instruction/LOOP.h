#ifndef LOOP_H
#define LOOP_H

#include "object.h"

namespace n_LOOP {
	class CLOOP :public Object
	{
	public:
		CLOOP();
		~CLOOP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LOOP;

#endif

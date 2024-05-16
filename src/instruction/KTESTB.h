#ifndef KTESTB_H
#define KTESTB_H

#include "object/object.h"

namespace n_KTESTB {
	class CKTESTB :public Object
	{
	public:
		CKTESTB();
		~CKTESTB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KTESTB;

#endif

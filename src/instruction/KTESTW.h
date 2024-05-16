#ifndef KTESTW_H
#define KTESTW_H

#include "object/object.h"

namespace n_KTESTW {
	class CKTESTW :public Object
	{
	public:
		CKTESTW();
		~CKTESTW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KTESTW;

#endif

#ifndef FCOM_H
#define FCOM_H

#include "object.h"

namespace n_FCOM {
	class CFCOM :public Object
	{
	public:
		CFCOM();
		~CFCOM();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FCOM;

#endif

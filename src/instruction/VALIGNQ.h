#ifndef VALIGNQ_H
#define VALIGNQ_H

#include "object.h"

namespace n_VALIGNQ {
	class CVALIGNQ :public Object
	{
	public:
		CVALIGNQ();
		~CVALIGNQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VALIGNQ;

#endif

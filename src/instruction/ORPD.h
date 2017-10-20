#ifndef ORPD_H
#define ORPD_H

#include "object.h"

namespace n_ORPD {
	class CORPD :public Object
	{
	public:
		CORPD();
		~CORPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ORPD;

#endif

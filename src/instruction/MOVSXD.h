#ifndef MOVSXD_H
#define MOVSXD_H

#include "object.h"

namespace n_MOVSXD {
	class CMOVSXD :public Object
	{
	public:
		CMOVSXD();
		~CMOVSXD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVSXD;

#endif

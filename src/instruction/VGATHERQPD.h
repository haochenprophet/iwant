#ifndef VGATHERQPD_H
#define VGATHERQPD_H

#include "object/object.h"

namespace n_VGATHERQPD {
	class CVGATHERQPD :public Object
	{
	public:
		CVGATHERQPD();
		~CVGATHERQPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGATHERQPD;

#endif

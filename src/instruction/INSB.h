#ifndef INSB_H
#define INSB_H

#include "object/object.h"

namespace n_INSB {
	class CINSB :public Object
	{
	public:
		CINSB();
		~CINSB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_INSB;

#endif

#ifndef PADDUSB_H
#define PADDUSB_H

#include "object.h"

namespace n_PADDUSB {
	class CPADDUSB :public Object
	{
	public:
		CPADDUSB();
		~CPADDUSB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PADDUSB;

#endif

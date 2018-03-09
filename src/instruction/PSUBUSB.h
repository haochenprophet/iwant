#ifndef PSUBUSB_H
#define PSUBUSB_H

#include "../object.h"

namespace n_PSUBUSB {
	class CPSUBUSB :public Object
	{
	public:
		CPSUBUSB();
		~CPSUBUSB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSUBUSB;

#endif

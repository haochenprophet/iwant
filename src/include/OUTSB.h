#ifndef OUTSB_H
#define OUTSB_H

#include "../object.h"

namespace n_OUTSB {
	class COUTSB :public Object
	{
	public:
		COUTSB();
		~COUTSB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_OUTSB;

#endif

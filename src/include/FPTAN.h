#ifndef FPTAN_H
#define FPTAN_H

#include "../object.h"

namespace n_FPTAN {
	class CFPTAN :public Object
	{
	public:
		CFPTAN();
		~CFPTAN();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FPTAN;

#endif

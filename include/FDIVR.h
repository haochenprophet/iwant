#ifndef FDIVR_H
#define FDIVR_H

#include "../object.h"

namespace n_FDIVR {
	class CFDIVR :public Object
	{
	public:
		CFDIVR();
		~CFDIVR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FDIVR;

#endif

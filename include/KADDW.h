#ifndef KADDW_H
#define KADDW_H

#include "../object.h"

namespace n_KADDW {
	class CKADDW :public Object
	{
	public:
		CKADDW();
		~CKADDW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KADDW;

#endif

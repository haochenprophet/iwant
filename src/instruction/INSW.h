#ifndef INSW_H
#define INSW_H

#include "object/object.h"

namespace n_INSW {
	class CINSW :public Object
	{
	public:
		CINSW();
		~CINSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_INSW;

#endif

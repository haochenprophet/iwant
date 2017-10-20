#ifndef SHR_H
#define SHR_H

#include "object.h"

namespace n_SHR {
	class CSHR :public Object
	{
	public:
		CSHR();
		~CSHR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SHR;

#endif

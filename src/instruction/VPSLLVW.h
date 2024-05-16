#ifndef VPSLLVW_H
#define VPSLLVW_H

#include "object/object.h"

namespace n_VPSLLVW {
	class CVPSLLVW :public Object
	{
	public:
		CVPSLLVW();
		~CVPSLLVW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPSLLVW;

#endif

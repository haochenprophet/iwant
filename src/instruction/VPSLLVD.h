#ifndef VPSLLVD_H
#define VPSLLVD_H

#include "../object.h"

namespace n_VPSLLVD {
	class CVPSLLVD :public Object
	{
	public:
		CVPSLLVD();
		~CVPSLLVD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPSLLVD;

#endif

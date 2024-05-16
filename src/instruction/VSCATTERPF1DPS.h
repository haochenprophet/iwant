#ifndef VSCATTERPF1DPS_H
#define VSCATTERPF1DPS_H

#include "object/object.h"

namespace n_VSCATTERPF1DPS {
	class CVSCATTERPF1DPS :public Object
	{
	public:
		CVSCATTERPF1DPS();
		~CVSCATTERPF1DPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSCATTERPF1DPS;

#endif

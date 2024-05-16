#ifndef VSCATTERPF0DPS_H
#define VSCATTERPF0DPS_H

#include "object/object.h"

namespace n_VSCATTERPF0DPS {
	class CVSCATTERPF0DPS :public Object
	{
	public:
		CVSCATTERPF0DPS();
		~CVSCATTERPF0DPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSCATTERPF0DPS;

#endif

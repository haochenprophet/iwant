#ifndef VGATHERPF0DPS_H
#define VGATHERPF0DPS_H

#include "object/object.h"

namespace n_VGATHERPF0DPS {
	class CVGATHERPF0DPS :public Object
	{
	public:
		CVGATHERPF0DPS();
		~CVGATHERPF0DPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGATHERPF0DPS;

#endif

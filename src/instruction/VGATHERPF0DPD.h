#ifndef VGATHERPF0DPD_H
#define VGATHERPF0DPD_H

#include "object/object.h"

namespace n_VGATHERPF0DPD {
	class CVGATHERPF0DPD :public Object
	{
	public:
		CVGATHERPF0DPD();
		~CVGATHERPF0DPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGATHERPF0DPD;

#endif

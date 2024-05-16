#ifndef VGATHERPF1QPD_H
#define VGATHERPF1QPD_H

#include "object/object.h"

namespace n_VGATHERPF1QPD {
	class CVGATHERPF1QPD :public Object
	{
	public:
		CVGATHERPF1QPD();
		~CVGATHERPF1QPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGATHERPF1QPD;

#endif

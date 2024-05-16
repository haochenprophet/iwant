#ifndef VGATHERPF0QPD_H
#define VGATHERPF0QPD_H

#include "object/object.h"

namespace n_VGATHERPF0QPD {
	class CVGATHERPF0QPD :public Object
	{
	public:
		CVGATHERPF0QPD();
		~CVGATHERPF0QPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGATHERPF0QPD;

#endif

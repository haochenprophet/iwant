#ifndef VSCATTERPF1QPD_H
#define VSCATTERPF1QPD_H

#include "object/object.h"

namespace n_VSCATTERPF1QPD {
	class CVSCATTERPF1QPD :public Object
	{
	public:
		CVSCATTERPF1QPD();
		~CVSCATTERPF1QPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSCATTERPF1QPD;

#endif

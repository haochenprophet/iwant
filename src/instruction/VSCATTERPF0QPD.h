#ifndef VSCATTERPF0QPD_H
#define VSCATTERPF0QPD_H

#include "object/object.h"

namespace n_VSCATTERPF0QPD {
	class CVSCATTERPF0QPD :public Object
	{
	public:
		CVSCATTERPF0QPD();
		~CVSCATTERPF0QPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSCATTERPF0QPD;

#endif

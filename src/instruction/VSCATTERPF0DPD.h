#ifndef VSCATTERPF0DPD_H
#define VSCATTERPF0DPD_H

#include "object/object.h"

namespace n_VSCATTERPF0DPD {
	class CVSCATTERPF0DPD :public Object
	{
	public:
		CVSCATTERPF0DPD();
		~CVSCATTERPF0DPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSCATTERPF0DPD;

#endif

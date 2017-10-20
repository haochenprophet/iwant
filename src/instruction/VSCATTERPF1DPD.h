#ifndef VSCATTERPF1DPD_H
#define VSCATTERPF1DPD_H

#include "object.h"

namespace n_VSCATTERPF1DPD {
	class CVSCATTERPF1DPD :public Object
	{
	public:
		CVSCATTERPF1DPD();
		~CVSCATTERPF1DPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSCATTERPF1DPD;

#endif

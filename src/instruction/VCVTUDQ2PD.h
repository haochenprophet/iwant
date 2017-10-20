#ifndef VCVTUDQ2PD_H
#define VCVTUDQ2PD_H

#include "object.h"

namespace n_VCVTUDQ2PD {
	class CVCVTUDQ2PD :public Object
	{
	public:
		CVCVTUDQ2PD();
		~CVCVTUDQ2PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTUDQ2PD;

#endif

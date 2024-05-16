#ifndef VCVTUDQ2PS_H
#define VCVTUDQ2PS_H

#include "object/object.h"

namespace n_VCVTUDQ2PS {
	class CVCVTUDQ2PS :public Object
	{
	public:
		CVCVTUDQ2PS();
		~CVCVTUDQ2PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTUDQ2PS;

#endif

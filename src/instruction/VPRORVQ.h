#ifndef VPRORVQ_H
#define VPRORVQ_H

#include "object/object.h"

namespace n_VPRORVQ {
	class CVPRORVQ :public Object
	{
	public:
		CVPRORVQ();
		~CVPRORVQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPRORVQ;

#endif

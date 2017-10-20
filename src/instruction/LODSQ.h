#ifndef LODSQ_H
#define LODSQ_H

#include "object.h"

namespace n_LODSQ {
	class CLODSQ :public Object
	{
	public:
		CLODSQ();
		~CLODSQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LODSQ;

#endif

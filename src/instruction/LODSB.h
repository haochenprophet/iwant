#ifndef LODSB_H
#define LODSB_H

#include "object.h"

namespace n_LODSB {
	class CLODSB :public Object
	{
	public:
		CLODSB();
		~CLODSB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LODSB;

#endif

#ifndef LODSW_H
#define LODSW_H

#include "object.h"

namespace n_LODSW {
	class CLODSW :public Object
	{
	public:
		CLODSW();
		~CLODSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LODSW;

#endif

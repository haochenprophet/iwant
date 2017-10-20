#ifndef REPNE_H
#define REPNE_H

#include "object.h"

namespace n_REPNE {
	class CREPNE :public Object
	{
	public:
		CREPNE();
		~CREPNE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_REPNE;

#endif

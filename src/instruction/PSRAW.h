#ifndef PSRAW_H
#define PSRAW_H

#include "object/object.h"

namespace n_PSRAW {
	class CPSRAW :public Object
	{
	public:
		CPSRAW();
		~CPSRAW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSRAW;

#endif

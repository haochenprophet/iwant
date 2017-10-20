#ifndef DEC_H
#define DEC_H

#include "object.h"

namespace n_DEC {
	class CDEC :public Object
	{
	public:
		CDEC();
		~CDEC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_DEC;

#endif

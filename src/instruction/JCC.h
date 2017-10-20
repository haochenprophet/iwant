#ifndef JCC_H
#define JCC_H

#include "object.h"

namespace n_JCC {
	class CJCC :public Object
	{
	public:
		CJCC();
		~CJCC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_JCC;

#endif

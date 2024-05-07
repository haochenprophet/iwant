#ifndef ISWALPHA_H
#define ISWALPHA_H

#include "../object.h"

namespace n_iswalpha {
	class Ciswalpha :public Object
	{
	public:
		Ciswalpha();
		~Ciswalpha();
		int my_init(void *p=nullptr);
	};
}

using namespace n_iswalpha;

#endif

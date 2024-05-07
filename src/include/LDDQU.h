#ifndef LDDQU_H
#define LDDQU_H

#include "../object.h"

namespace n_LDDQU {
	class CLDDQU :public Object
	{
	public:
		CLDDQU();
		~CLDDQU();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LDDQU;

#endif

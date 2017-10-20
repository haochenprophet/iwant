#ifndef AESKEYGENASSIST_H
#define AESKEYGENASSIST_H

#include "object.h"

namespace n_AESKEYGENASSIST {
	class CAESKEYGENASSIST :public Object
	{
	public:
		CAESKEYGENASSIST();
		~CAESKEYGENASSIST();
		int my_init(void *p=nullptr);
	};
}

using namespace n_AESKEYGENASSIST;

#endif

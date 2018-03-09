#ifndef VZEROUPPER_H
#define VZEROUPPER_H

#include "../object.h"

namespace n_VZEROUPPER {
	class CVZEROUPPER :public Object
	{
	public:
		CVZEROUPPER();
		~CVZEROUPPER();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VZEROUPPER;

#endif

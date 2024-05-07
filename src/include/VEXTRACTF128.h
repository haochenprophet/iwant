#ifndef VEXTRACTF128_H
#define VEXTRACTF128_H

#include "../object.h"

namespace n_VEXTRACTF128 {
	class CVEXTRACTF128 :public Object
	{
	public:
		CVEXTRACTF128();
		~CVEXTRACTF128();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VEXTRACTF128;

#endif

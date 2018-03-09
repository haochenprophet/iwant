#ifndef VEXTRACTI128_H
#define VEXTRACTI128_H

#include "../object.h"

namespace n_VEXTRACTI128 {
	class CVEXTRACTI128 :public Object
	{
	public:
		CVEXTRACTI128();
		~CVEXTRACTI128();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VEXTRACTI128;

#endif

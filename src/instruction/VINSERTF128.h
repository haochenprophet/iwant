#ifndef VINSERTF128_H
#define VINSERTF128_H

#include "object.h"

namespace n_VINSERTF128 {
	class CVINSERTF128 :public Object
	{
	public:
		CVINSERTF128();
		~CVINSERTF128();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VINSERTF128;

#endif

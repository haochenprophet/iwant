#ifndef VPMOVQB_H
#define VPMOVQB_H

#include "object.h"

namespace n_VPMOVQB {
	class CVPMOVQB :public Object
	{
	public:
		CVPMOVQB();
		~CVPMOVQB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVQB;

#endif

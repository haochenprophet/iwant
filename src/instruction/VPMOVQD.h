#ifndef VPMOVQD_H
#define VPMOVQD_H

#include "object/object.h"

namespace n_VPMOVQD {
	class CVPMOVQD :public Object
	{
	public:
		CVPMOVQD();
		~CVPMOVQD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVQD;

#endif

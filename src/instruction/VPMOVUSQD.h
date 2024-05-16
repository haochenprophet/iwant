#ifndef VPMOVUSQD_H
#define VPMOVUSQD_H

#include "object/object.h"

namespace n_VPMOVUSQD {
	class CVPMOVUSQD :public Object
	{
	public:
		CVPMOVUSQD();
		~CVPMOVUSQD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVUSQD;

#endif

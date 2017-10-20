#ifndef VPMOVUSQW_H
#define VPMOVUSQW_H

#include "object.h"

namespace n_VPMOVUSQW {
	class CVPMOVUSQW :public Object
	{
	public:
		CVPMOVUSQW();
		~CVPMOVUSQW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVUSQW;

#endif

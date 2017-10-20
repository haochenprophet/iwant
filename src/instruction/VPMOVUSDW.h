#ifndef VPMOVUSDW_H
#define VPMOVUSDW_H

#include "object.h"

namespace n_VPMOVUSDW {
	class CVPMOVUSDW :public Object
	{
	public:
		CVPMOVUSDW();
		~CVPMOVUSDW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVUSDW;

#endif

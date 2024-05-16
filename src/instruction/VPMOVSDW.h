#ifndef VPMOVSDW_H
#define VPMOVSDW_H

#include "object/object.h"

namespace n_VPMOVSDW {
	class CVPMOVSDW :public Object
	{
	public:
		CVPMOVSDW();
		~CVPMOVSDW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVSDW;

#endif

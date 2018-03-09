#ifndef VPMOVQW_H
#define VPMOVQW_H

#include "../object.h"

namespace n_VPMOVQW {
	class CVPMOVQW :public Object
	{
	public:
		CVPMOVQW();
		~CVPMOVQW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVQW;

#endif

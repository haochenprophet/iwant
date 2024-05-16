#ifndef VPMOVW2M_H
#define VPMOVW2M_H

#include "object/object.h"

namespace n_VPMOVW2M {
	class CVPMOVW2M :public Object
	{
	public:
		CVPMOVW2M();
		~CVPMOVW2M();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVW2M;

#endif

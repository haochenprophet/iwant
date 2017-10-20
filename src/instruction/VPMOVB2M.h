#ifndef VPMOVB2M_H
#define VPMOVB2M_H

#include "object.h"

namespace n_VPMOVB2M {
	class CVPMOVB2M :public Object
	{
	public:
		CVPMOVB2M();
		~CVPMOVB2M();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVB2M;

#endif

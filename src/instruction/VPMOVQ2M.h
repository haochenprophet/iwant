#ifndef VPMOVQ2M_H
#define VPMOVQ2M_H

#include "object/object.h"

namespace n_VPMOVQ2M {
	class CVPMOVQ2M :public Object
	{
	public:
		CVPMOVQ2M();
		~CVPMOVQ2M();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVQ2M;

#endif

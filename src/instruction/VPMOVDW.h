#ifndef VPMOVDW_H
#define VPMOVDW_H

#include "object/object.h"

namespace n_VPMOVDW {
	class CVPMOVDW :public Object
	{
	public:
		CVPMOVDW();
		~CVPMOVDW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVDW;

#endif

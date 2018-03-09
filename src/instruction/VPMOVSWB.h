#ifndef VPMOVSWB_H
#define VPMOVSWB_H

#include "../object.h"

namespace n_VPMOVSWB {
	class CVPMOVSWB :public Object
	{
	public:
		CVPMOVSWB();
		~CVPMOVSWB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVSWB;

#endif

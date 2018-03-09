#ifndef VPMOVUSWB_H
#define VPMOVUSWB_H

#include "../object.h"

namespace n_VPMOVUSWB {
	class CVPMOVUSWB :public Object
	{
	public:
		CVPMOVUSWB();
		~CVPMOVUSWB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVUSWB;

#endif

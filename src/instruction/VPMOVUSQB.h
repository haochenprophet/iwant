#ifndef VPMOVUSQB_H
#define VPMOVUSQB_H

#include "../object.h"

namespace n_VPMOVUSQB {
	class CVPMOVUSQB :public Object
	{
	public:
		CVPMOVUSQB();
		~CVPMOVUSQB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVUSQB;

#endif

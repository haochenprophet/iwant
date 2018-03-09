#ifndef VPMOVD2M_H
#define VPMOVD2M_H

#include "../object.h"

namespace n_VPMOVD2M {
	class CVPMOVD2M :public Object
	{
	public:
		CVPMOVD2M();
		~CVPMOVD2M();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVD2M;

#endif

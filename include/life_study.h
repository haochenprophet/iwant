#ifndef LIFE_STUDY_H
#define LIFE_STUDY_H

#include "../object.h"

namespace n_life_study {
	class Clife_study :public Object
	{
	public:
		Clife_study();
		~Clife_study();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_study); }
	};
}

using namespace n_life_study;

#endif

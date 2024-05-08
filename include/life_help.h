#ifndef LIFE_HELP_H
#define LIFE_HELP_H

#include "../object.h"

namespace n_life_help {
	class Clife_help :public Object
	{
	public:
		Clife_help();
		~Clife_help();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_help); }
	};
}

using namespace n_life_help;

#endif

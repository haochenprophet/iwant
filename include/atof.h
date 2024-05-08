#ifndef ATOF_H
#define ATOF_H

#include "../object.h"

namespace n_atof {
	class Catof :public Object
	{
	public:
		Catof();
		~Catof();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Catof); }
		static double atof_c(const char* str);
	};
}

using namespace n_atof;

#endif

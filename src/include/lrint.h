#ifndef LRINT_H
#define LRINT_H

#include "../object.h"

namespace n_lrint {
	class Clrint :public Object
	{
	public:
		Clrint();
		~Clrint();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Clrint); }
		static long int lrint_c(double x);
		static long int lrintf_c(float x);
		static long int lrintl_c(long double x);

	};
}

using namespace n_lrint;

#endif

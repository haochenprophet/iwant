#ifndef LLROUND_H
#define LLROUND_H

#include "../object.h"

namespace n_llround {
	class Cllround :public Object
	{
	public:
		Cllround();
		~Cllround();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cllround); }
		static long long int llround_c(double x);
		static long long int llroundf_c(float x); 
		static long long int llroundl_c(long double x);

	};
}

using namespace n_llround;

#endif

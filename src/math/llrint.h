#ifndef LLRINT_H
#define LLRINT_H

#include "../object.h"

namespace n_llrint {
	class Cllrint :public Object
	{
	public:
		Cllrint();
		~Cllrint();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cllrint); }
		static long long int llrint_c(double x); 
		static long long int llrintf_c(float x);
		static long long int llrintl_c(long double x);

	};
}

using namespace n_llrint;

#endif

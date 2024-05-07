#ifndef NAN_H
#define NAN_H

#include "../object.h"

namespace n_nan {
	class Cnan :public Object
	{
	public:
		Cnan();
		~Cnan();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cnan); }
		static double nan_c(const char* tagp);
		static float nanf_c(const char* tagp);
		static float nanl(const char* tagp);



	};
}

using namespace n_nan;

#endif

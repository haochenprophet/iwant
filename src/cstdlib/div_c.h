#ifndef DIV_C_H
#define DIV_C_H

#include "object/object.h"

namespace n_div_c {
	class Cdiv_c :public Object
	{
	public:
		Cdiv_c();
		~Cdiv_c();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdiv_c); }
		static div_t div_c(int numer, int denom);
	};
}

using namespace n_div_c;

#endif

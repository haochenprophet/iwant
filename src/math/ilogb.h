#ifndef ILOGB_H
#define ILOGB_H

#include "../object.h"

namespace n_ilogb {
	class Cilogb :public Object
	{
	public:
		Cilogb();
		~Cilogb();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cilogb); }
		static int ilogb_c(double x); 
		static int ilogbf_c(float x);
		static int ilogbl_c(long double x);

	};
}

using namespace n_ilogb;

#endif

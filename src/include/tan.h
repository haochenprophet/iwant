#ifndef TAN_H
#define TAN_H

#include "../object.h"

namespace n_tan {
	class Ctan :public Object
	{
	public:
		Ctan();
		~Ctan();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Ctan); }
		static double tan_c(double x);

	};
}

using namespace n_tan;

#endif

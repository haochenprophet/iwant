#ifndef LOG10_H
#define LOG10_H

#include "../object.h"

namespace n_log10 {
	class Clog10 :public Object
	{
	public:
		Clog10();
		~Clog10();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Clog10); }
	};
}

using namespace n_log10;

#endif

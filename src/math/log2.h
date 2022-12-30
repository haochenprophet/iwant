#ifndef LOG2_H
#define LOG2_H

#include "../object.h"

namespace n_log2 {
	class Clog2 :public Object
	{
	public:
		Clog2();
		~Clog2();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Clog2); }
	};
}

using namespace n_log2;

#endif

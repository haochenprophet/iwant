#ifndef ALGORITHM_H
#define ALGORITHM_H

#include "../object.h"

namespace n_algorithm {
	class Calgorithm :public Object
	{
	public:
		Calgorithm();
		~Calgorithm();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Calgorithm); }
	};
}

using namespace n_algorithm;

#endif

#ifndef WARSHIP_INFORMATION_H
#define WARSHIP_INFORMATION_H

#include "object/object.h"

namespace n_warship_information {
	class Cwarship_information :public Object
	{
	public:
		Cwarship_information();
		~Cwarship_information();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_information); }
	};
}

using namespace n_warship_information;

#endif

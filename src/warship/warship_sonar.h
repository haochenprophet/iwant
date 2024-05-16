#ifndef WARSHIP_SONAR_H
#define WARSHIP_SONAR_H

#include "object/object.h"

namespace n_warship_sonar {
	class Cwarship_sonar :public Object
	{
	public:
		Cwarship_sonar();
		~Cwarship_sonar();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_sonar); }
	};
}

using namespace n_warship_sonar;

#endif

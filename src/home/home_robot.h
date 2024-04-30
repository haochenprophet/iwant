#ifndef HOME_ROBOT_H
#define HOME_ROBOT_H

#include "../object.h"

namespace n_home_robot {
	class Chome_robot :public Object
	{
	public:
		Chome_robot();
		~Chome_robot();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_robot); }
	};
}

using namespace n_home_robot;

#endif

#ifndef MARS_ROBOT_H
#define MARS_ROBOT_H

#include "../object.h"

namespace n_mars_robot {
	class Cmars_robot :public Object
	{
	public:
		Cmars_robot();
		~Cmars_robot();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmars_robot); }
	};
}

using namespace n_mars_robot;

#endif

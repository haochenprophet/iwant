#ifndef CAR_SWERVE_H
#define CAR_SWERVE_H

#include "../object.h"

namespace n_car_swerve {
	class Ccar_swerve :public Object
	{
	public:
		Ccar_swerve();
		~Ccar_swerve();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_swerve); }
	};
}

using namespace n_car_swerve;

#endif

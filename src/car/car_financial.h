#ifndef CAR_FINANCIAL_H
#define CAR_FINANCIAL_H

#include "../object.h"

namespace n_car_financial {
	class Ccar_financial :public Object
	{
	public:
		Ccar_financial();
		~Ccar_financial();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_financial); }
	};
}

using namespace n_car_financial;

#endif

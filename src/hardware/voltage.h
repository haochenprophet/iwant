#ifndef VOLTAGE_H
#define VOLTAGE_H

#include "object/object.h"

namespace n_voltage {
	class Cvoltage :public Object
	{
	public:
		Cvoltage();
		~Cvoltage();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cvoltage); }
	};
}

using namespace n_voltage;

#endif

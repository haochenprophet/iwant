#ifndef I2C_H
#define I2C_H

#include "object/object.h"

namespace n_i2c {
	class Ci2c :public Object
	{
	public:
		Ci2c();
		~Ci2c();
		int my_init(void *p=nullptr);
	};
}

using namespace n_i2c;

#endif

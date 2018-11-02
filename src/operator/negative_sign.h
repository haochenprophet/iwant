#ifndef NEGATIVE_SIGN_H
#define NEGATIVE_SIGN_H

#include "../operator.h"

namespace n_negative_sign {
	class Cnegative_sign :public Coperator
	{
	public:
		Cnegative_sign();
		~Cnegative_sign();
		int my_init(void *p=nullptr);
	};
}

using namespace n_negative_sign;

#endif

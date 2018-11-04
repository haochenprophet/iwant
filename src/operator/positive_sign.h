#ifndef POSITIVE_SIGN_H
#define POSITIVE_SIGN_H

#include "operator.h"

namespace n_positive_sign {
	class Cpositive_sign :public Coperator
	{
	public:
		Cpositive_sign();
		~Cpositive_sign();
		int my_init(void *p=nullptr);
	};
}

using namespace n_positive_sign;

#endif

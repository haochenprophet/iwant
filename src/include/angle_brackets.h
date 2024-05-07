#ifndef ANGLE_BRACKETS_H
#define ANGLE_BRACKETS_H

#include "operator.h"

namespace n_angle_brackets {
	class Cangle_brackets :public Coperator
	{
	public:
		Cangle_brackets();
		~Cangle_brackets();
		int my_init(void *p=nullptr);
	};
}

using namespace n_angle_brackets;

#endif

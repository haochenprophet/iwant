#ifndef MATH_H
#define MATH_H

#include "object.h"
#include <math.h>

#ifndef PI
#define PI 3.1415926535898
#endif // 

namespace n_math {
	class Cmath :public Object
	{
	public:
		Cmath();
	};

}
using namespace n_math;

#endif

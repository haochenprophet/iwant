#ifndef MOVE_CLASS_H 
#define MOVE_CLASS_H

#include "object.h"

namespace n_move {
	class Cmove :public Object
	{
	public:
		int my_init(void *p=nullptr);
		Cmove();
	};
}
using namespace n_move;

#endif
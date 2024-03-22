#ifndef CODE_MOVE_H
#define CODE_MOVE_H

#include "../object.h"

namespace n_code_move {
	class Ccode_move :public Object
	{
	public:
		Ccode_move();
		~Ccode_move();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_move); }
	};
}

using namespace n_code_move;

#endif

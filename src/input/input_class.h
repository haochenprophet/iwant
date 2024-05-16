#ifndef INPUT_CLASS_H 
#define INPUT_CLASS_H

#include "object/object.h"

namespace n_input {
	class Cinput :public Object
	{
	public:
		int my_init(void *p=nullptr);
		Cinput();
	};
}
using namespace n_input;

#endif
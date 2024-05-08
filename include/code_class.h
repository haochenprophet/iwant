#ifndef CODE_CLASS_H
#define CODE_CLASS_H

#include "../object.h"

namespace n_code_class {
	class Ccode_class :public Object
	{
	public:
		Ccode_class();
		~Ccode_class();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_class); }
	};
}

using namespace n_code_class;

#endif

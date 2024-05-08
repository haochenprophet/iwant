#ifndef CODE_INFO_H
#define CODE_INFO_H

#include "../object.h"

namespace n_code_info {
	class Ccode_info :public Object
	{
	public:
		Ccode_info();
		~Ccode_info();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_info); }
	};
}

using namespace n_code_info;

#endif

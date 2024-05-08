#ifndef CODE_REVERT_H
#define CODE_REVERT_H

#include "../object.h"

namespace n_code_revert {
	class Ccode_revert :public Object
	{
	public:
		Ccode_revert();
		~Ccode_revert();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_revert); }
	};
}

using namespace n_code_revert;

#endif

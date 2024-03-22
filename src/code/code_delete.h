#ifndef CODE_DELETE_H
#define CODE_DELETE_H

#include "../object.h"

namespace n_code_delete {
	class Ccode_delete :public Object
	{
	public:
		Ccode_delete();
		~Ccode_delete();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_delete); }
	};
}

using namespace n_code_delete;

#endif

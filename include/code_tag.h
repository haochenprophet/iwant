#ifndef CODE_TAG_H
#define CODE_TAG_H

#include "../object.h"

namespace n_code_tag {
	class Ccode_tag :public Object
	{
	public:
		Ccode_tag();
		~Ccode_tag();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_tag); }
	};
}

using namespace n_code_tag;

#endif

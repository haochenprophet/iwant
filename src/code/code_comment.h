#ifndef CODE_COMMENT_H
#define CODE_COMMENT_H

#include "object/object.h"

namespace n_code_comment {
	class Ccode_comment :public Object
	{
	public:
		Ccode_comment();
		~Ccode_comment();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_comment); }
	};
}

using namespace n_code_comment;

#endif

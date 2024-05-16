#ifndef CODE_FEEDBACK_H
#define CODE_FEEDBACK_H

#include "object/object.h"

namespace n_code_feedback {
	class Ccode_feedback :public Object
	{
	public:
		Ccode_feedback();
		~Ccode_feedback();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_feedback); }
	};
}

using namespace n_code_feedback;

#endif

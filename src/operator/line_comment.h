#ifndef LINE_COMMENT_H
#define LINE_COMMENT_H

#include "../operator.h"

namespace n_line_comment {
	class Cline_comment :public Coperator
	{
	public:
		Cline_comment();
		~Cline_comment();
		int my_init(void *p=nullptr);
	};
}

using namespace n_line_comment;

#endif

#ifndef BLOCK_COMMENT_H
#define BLOCK_COMMENT_H

#include "operator.h"

namespace n_block_comment {
	class Cblock_comment :public Coperator
	{
	public:
		Cblock_comment();
		~Cblock_comment();
		int my_init(void *p=nullptr);
	};
}

using namespace n_block_comment;

#endif

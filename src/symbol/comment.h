#ifndef COMMENT_H
#define COMMENT_H

#include "object/object.h"


enum CommentType  
{
	NotComment_T,
	C_TypeCommentLine_T,
	C_TypeCommentBlockStart_T,
	C_TypeCommentBlockEnd_T,
	BatchComment_T,
};


namespace n_comment {
	class Ccomment :public Object
	{
	public:
		Ccomment();
		int my_init(void *p=nullptr);
		int isMe(char *identifier);

	};
}

using namespace n_comment;

#endif

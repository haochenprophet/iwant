#include "comment.h"
int Ccomment::my_init(void *p)
{
	this->name = "Ccomment";
	this->alias = "comment";
	this->syntax=C_CPP_SYNTAX;
	return 0;
}

Ccomment::Ccomment()
{
	this->my_init();
}

int Ccomment::isMe(char *identifier)
{
	if(*identifier=='/')
	{
		if(*(identifier+1)=='/') return C_TypeCommentLine_T;
		if(*(identifier+1)=='*') return C_TypeCommentBlockStart_T;
	}

	if( *identifier=='*' && *(identifier+1)=='/') return C_TypeCommentBlockEnd_T;
	
	return 0;
}

#ifndef COMMENT_TEST
#define COMMENT_TEST 0//1
#endif

#if COMMENT_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "COMMENT_TEST\n\n";
	Ccomment c;
	int n=c.isMe((char *)"*/");
	std::cout<<n<<endl;
	return 0;
}
#endif 
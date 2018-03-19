#ifndef BRACKETS_H
#define BRACKETS_H

#include "object.h"

namespace n_brackets {
	class Cbrackets :public Object
	{
	public:
		int leftRoundBracketCount;//'(', 
		int rightRoundBracketCount;//')',

		int leftQquareBracketCount;//'[',
		int rightQquareBracketCount;//']',

		int leftBraceCount;//'{',//{
		int rightBraceCount;//'}',//}
		
		int leftAngleBracketCount;//<
		int rightAngleBracketCount;//>

		char braceket;
	public:
		int my_init(void *p=nullptr);
		Cbrackets();
		~Cbrackets();

		int detectL(char *cp);//left detect
		int detectR(char *cp);//right detect
		int detect(char *cp);
		int isHalf(char *cp,char *cp1);
		char * getblock(char * start,char* end,char c='{',char *buf=nullptr,int *pLen=0,int skip=0);//0: error // other true
		char * getend(char * start,char* end,char *e);
		char * getstart(char* start,char *end,char *s);
	};

}
using namespace n_brackets;

#endif

#ifndef FRIEND_H
#define FRIEND_H

#include "object.h"

namespace n_friend {
	class Cfriend :public Object
	{
	public:
		Cfriend();
		int my_init(void *p=NULL);
	};
}

using namespace n_friend;

#endif

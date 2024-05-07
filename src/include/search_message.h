#ifndef SEARCH_MESSAGE_H
#define SEARCH_MESSAGE_H

#include "message.h"

namespace n_search_message {
	class Csearch_message :public Cmessage
	{
	public:
		Csearch_message();
		~Csearch_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_search_message;

#endif

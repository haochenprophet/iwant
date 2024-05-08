#ifndef COLLECT_MESSAGE_H
#define COLLECT_MESSAGE_H

#include "message.h"

namespace n_collect_message {
	class Ccollect_message :public Cmessage
	{
	public:
		Ccollect_message();
		~Ccollect_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_collect_message;

#endif

#ifndef TABLE_MESSAGE_H
#define TABLE_MESSAGE_H

#include "message.h"

namespace n_table_message {
	class Ctable_message :public Cmessage
	{
	public:
		Ctable_message();
		~Ctable_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_table_message;

#endif

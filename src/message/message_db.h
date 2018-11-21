#ifndef MESSAGE_DB_H
#define MESSAGE_DB_H

#include "../object.h"

namespace n_message_db {
	class Cmessage_db :public Object
	{
	public:
		Cmessage_db();
		~Cmessage_db();
		int my_init(void *p=nullptr);
	};
}

using namespace n_message_db;

#endif

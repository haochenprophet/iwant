#ifndef COMMAND_MESSAGE_H
#define COMMAND_MESSAGE_H

#include "message.h"

namespace n_command_message {
	class Ccommand_message :public Cmessage
	{
	public:
		Ccommand_message();
		~Ccommand_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_command_message;

#endif

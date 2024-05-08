#ifndef FILE_MESSAGE_H
#define FILE_MESSAGE_H

#include "message.h"

namespace n_file_message {
	class Cfile_message :public Cmessage
	{
	public:
		Cfile_message();
		~Cfile_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_file_message;

#endif

#ifndef TEXT_MESSAGE_H
#define TEXT_MESSAGE_H

#include "message.h"

namespace n_text_message {
	class Ctext_message :public Cmessage
	{
	public:
		Ctext_message();
		~Ctext_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_text_message;

#endif

#ifndef LABEL_MESSAGE_H
#define LABEL_MESSAGE_H

#include "message.h"

namespace n_label_message {
	class Clabel_message :public Cmessage
	{
	public:
		Clabel_message();
		~Clabel_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_label_message;

#endif

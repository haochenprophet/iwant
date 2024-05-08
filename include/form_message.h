#ifndef FORM_MESSAGE_H
#define FORM_MESSAGE_H

#include "message.h"

namespace n_form_message {
	class Cform_message :public Cmessage
	{
	public:
		Cform_message();
		~Cform_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_form_message;

#endif

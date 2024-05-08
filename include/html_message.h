#ifndef HTML_MESSAGE_H
#define HTML_MESSAGE_H

#include "message.h"

namespace n_html_message {
	class Chtml_message :public Cmessage
	{
	public:
		Chtml_message();
		~Chtml_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_html_message;

#endif

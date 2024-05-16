#ifndef SMTP_H
#define SMTP_H

#include "object/object.h"

namespace n_smtp {
	class Csmtp :public Object
	{
	public:
		Csmtp();
		int my_init(void *p=nullptr);
	};
}

using namespace n_smtp;

#endif

#ifndef FTP_H
#define FTP_H

#include "object.h"

namespace n_ftp {
	class Cftp :public Object
	{
	public:
		Cftp();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ftp;

#endif

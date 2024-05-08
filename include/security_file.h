#ifndef SECURITY_FILE_H
#define SECURITY_FILE_H

#include "../object.h"

namespace n_security_file {
	class Csecurity_file :public Object
	{
	public:
		Csecurity_file();
		~Csecurity_file();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_file); }
	};
}

using namespace n_security_file;

#endif

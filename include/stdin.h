#ifndef STDIN_H
#define STDIN_H

#include "../object.h"

namespace n_stdin {
	class Cstdin :public Object
	{
	public:
		Cstdin();
		~Cstdin();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cstdin); }
	};
}

using namespace n_stdin;

#endif

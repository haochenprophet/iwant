#ifndef SECURITY_UI_H
#define SECURITY_UI_H

#include "../object.h"

namespace n_security_ui {
	class Csecurity_ui :public Object
	{
	public:
		Csecurity_ui();
		~Csecurity_ui();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_ui); }
	};
}

using namespace n_security_ui;

#endif

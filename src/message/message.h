#ifndef MESSAGE_H
#define MESSAGE_H

#include "object/object.h"

namespace n_message {
	class Cmessage :public Object
	{
	public:
		Cmessage();
		~Cmessage();
		int my_init(void *p=nullptr);
		void add_global_objects(Object* p); //Add  package global object to Object* p
	};
}

using namespace n_message;

#endif

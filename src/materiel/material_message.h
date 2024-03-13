#ifndef MATERIAL_MESSAGE_H
#define MATERIAL_MESSAGE_H

#include "../object.h"

namespace n_material_message {
	class Cmaterial_message :public Object
	{
	public:
		Cmaterial_message();
		~Cmaterial_message();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmaterial_message); }
	};
}

using namespace n_material_message;

#endif

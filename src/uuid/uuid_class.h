#ifndef UUID_CLASS_H 
#define UUID_CLASS_H

#include "object/object.h"

namespace n_uuid {
	class Cuuid :public Object
	{
	public:
		Cuuid();
		~Cuuid();
	};
}
using namespace n_uuid;

#endif
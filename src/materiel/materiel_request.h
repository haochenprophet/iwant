#ifndef MATERIEL_REQUEST_H
#define MATERIEL_REQUEST_H

#include "object/object.h"

namespace n_materiel_request {
	class Cmateriel_request :public Object
	{
	public:
		Cmateriel_request();
		~Cmateriel_request();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_request); }
	};
}

using namespace n_materiel_request;

#endif

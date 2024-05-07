#ifndef MATERIEL_STATUS_H
#define MATERIEL_STATUS_H

#include "../object.h"

namespace n_materiel_status {
	class Cmateriel_status :public Object
	{
	public:
		Cmateriel_status();
		~Cmateriel_status();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_status); }
	};
}

using namespace n_materiel_status;

#endif

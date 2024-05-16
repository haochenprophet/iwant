#ifndef MATERIEL_STATISTICS_H
#define MATERIEL_STATISTICS_H

#include "object/object.h"

namespace n_materiel_statistics {
	class Cmateriel_statistics :public Object
	{
	public:
		Cmateriel_statistics();
		~Cmateriel_statistics();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_statistics); }
	};
}

using namespace n_materiel_statistics;

#endif

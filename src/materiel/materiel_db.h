#ifndef MATERIEL_DB_H
#define MATERIEL_DB_H

#include "../object.h"

namespace n_materiel_db {
	class Cmateriel_db :public Object
	{
	public:
		Cmateriel_db();
		~Cmateriel_db();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_db); }
	};
}

using namespace n_materiel_db;

#endif

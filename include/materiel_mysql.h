#ifndef MATERIEL_MYSQL_H
#define MATERIEL_MYSQL_H

#include "../object.h"

namespace n_materiel_mysql {
	class Cmateriel_mysql :public Object
	{
	public:
		Cmateriel_mysql();
		~Cmateriel_mysql();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_mysql); }
	};
}

using namespace n_materiel_mysql;

#endif

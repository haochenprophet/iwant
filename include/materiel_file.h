#ifndef MATERIEL_FILE_H
#define MATERIEL_FILE_H

#include "../object.h"

namespace n_materiel_file {
	class Cmateriel_file :public Object
	{
	public:
		Cmateriel_file();
		~Cmateriel_file();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_file); }
	};
}

using namespace n_materiel_file;

#endif

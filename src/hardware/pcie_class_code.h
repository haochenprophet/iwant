#ifndef PCIE_CLASS_CODE_H
#define PCIE_CLASS_CODE_H

#include "../object.h"

namespace n_pcie_class_code {
	class Cclass_code
	{
	public:
		unsigned char base_class;//Base Class
		unsigned char sub_class;//Sub-Class
		unsigned char programming_interface;//Programming Interface
		char* meaning;//Meaning
	public:
		bool is_me(unsigned char base, unsigned char sub, unsigned char programming_interface);
	};

	class Cpcie_class_code :public Object
	{
	public:
		Cpcie_class_code();
		~Cpcie_class_code();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cpcie_class_code); }
	public:
		char* meaning(Cclass_code * tab,int tab_count, unsigned char base, unsigned char sub, unsigned char programming_interface);
		char* meaning(unsigned char base, unsigned char sub, unsigned char programming_interface);
	};
}

using namespace n_pcie_class_code;

#endif

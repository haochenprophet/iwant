#include "pcie_class_code.h"

//refer :PCI Code and ID Assignment Specification Revision 1.12 
Cclass_code class_code_tab[] =
{
	//Base Class,Sub - Class,Programming Interface,Meaning
	//1.1. Base Class 00h
	{0x00,0x00,0x00,(char*) "All currently implemented devices except VGA-compatible devices"},
	{0x00,0x01,0x00,(char*)"VGA-compatible device"},
	//1.2.Base Class 01h
	{0x01,0x04,0x00,(char*)"RAID controller"},
	//...
	//end
	{0xFF,0xFF,0xFF,(char*)"Unknow"},
};

#define CLASS_CODE_TABLE_COUNT (sizeof(class_code_tab)/sizeof(Cclass_code))

bool Cclass_code::is_me(unsigned char base, unsigned char sub, unsigned char programming_interface)
{
	if (this->base_class == base && this->sub_class == sub && this->programming_interface == programming_interface) { return true; }
	return false;
}

int Cpcie_class_code::my_init(void *p)
{
	this->name = "Cpcie_class_code";
	this->alias = "pcie_class_code";
	return 0;
}

Cpcie_class_code::Cpcie_class_code()
{
	this->my_init();
}

Cpcie_class_code::~Cpcie_class_code()
{

}

char * Cpcie_class_code::meaning(Cclass_code* tab, int tab_count, unsigned char base, unsigned char sub, unsigned char programming_interface)
{
	int i;
	for (i = 0; i < tab_count; i++)
	{
		if (tab[i].is_me(base, sub, programming_interface)) 
		{
			return tab[i].meaning;
		}
	}
	return nullptr;
}

char* Cpcie_class_code::meaning(unsigned char base, unsigned char sub, unsigned char programming_interface)
{
	return this->meaning(class_code_tab, (int)CLASS_CODE_TABLE_COUNT, base, sub, programming_interface);
}

#ifndef PCIE_CLASS_CODE_TEST
#define PCIE_CLASS_CODE_TEST 0//1
#endif

#if PCIE_CLASS_CODE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif

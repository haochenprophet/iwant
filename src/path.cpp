#include "path.h"

Cpath::Cpath()
{
	this->name = "Cpath";
	this->alias = "path";
}

Cpath::~Cpath()
{
}

#if LINUX_OS
int Cpath::list(char *dir_name)
{
	DIR *p_dir;
	struct dirent *p_dirent;
	
	if((p_dir=opendir(dir_name))==NULL) return -1;

	while((p_dirent=readdir(p_dir)))
	{
		cout<<p_dirent->d_name<<endl;
	}

	closedir(p_dir);
	return 0;
}
#endif


#ifndef PATH_TEST
#define PATH_TEST 01
#endif

#if PATH_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	cout << "PATH_TEST\n\n";
	Cpath p;
	p.list((char *)".");

	return 0;
}
#endif 
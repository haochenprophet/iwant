#include "path.h"

#ifndef PATH_TEST
#define PATH_TEST 0//1
#endif

Cpath::Cpath()
{
	this->name = "Cpath";
	this->alias = "path";
}

Cpath::~Cpath()
{
#if PATH_TEST
	cout<<"Cpath::~Cpath()\n";
#endif
	this->my_clear();
}

#if LINUX_OS
int Cpath::list(DIR_T *dir_name,DIR_T *term,int display,int to_list)
{
	DIR *p_dir;	
	DIR_T *p_name;
	struct dirent *p_dirent;
	int size;

	if((p_dir=opendir(dir_name))==NULL) return -1;
	this->my_clear();
	while((p_dirent=readdir(p_dir)))
	{
		if(term&&!strstr(p_dirent->d_name,term)) continue;
		if(display) cout<<p_dirent->d_name<<endl;
		if(to_list)
		{
			size=strlen(p_dirent->d_name);
			size+=sizeof(DIR_T);
			this->allot(size,(void **)&p_name);
			strcpy((char*)p_name,(char*)p_dirent->d_name);
			this->name_list.push_back((char *)p_name);
		}
	}

	closedir(p_dir);
	return 0;
}
#endif

#if WINDOWS_OS
int Cpath::list(DIR_T *dir_name,DIR_T *term,int display,int to_list)
{
	WIN32_FIND_DATA ffd;//FindFileData
	LARGE_INTEGER filesize;
	HANDLE hFind = INVALID_HANDLE_VALUE;
	TCHAR szDir[MAX_PATH];
	size_t length_of_arg;

	DIR_T *p_name;
	// Check that the input path plus 3 is not longer than MAX_PATH.
	// Three characters are for the "\*" plus NULL appended below.

	StringCchLength(dir_name, MAX_PATH, &length_of_arg);

	if (length_of_arg > (MAX_PATH - 3))
	{
		_tprintf(TEXT("\nDirectory path is too long.\n"));
		return (-1);
	}

	_tprintf(TEXT("\nTarget directory is %s\n\n"), dir_name);

	// Prepare string for use with FindFile functions.  First, copy the
	// string to a buffer, then append '\*' to the directory name.

	StringCchCopy(szDir, MAX_PATH, dir_name);
	StringCchCat(szDir, MAX_PATH, TEXT("\\*"));
	_tprintf(TEXT("szDir=%s\n"), szDir);//test
	// Find the first file in the directory.

	hFind = FindFirstFile(szDir, &ffd);
	if (hFind == INVALID_HANDLE_VALUE) return -1;

	if(display) _tprintf(TEXT("The first file found is %s\n"), ffd.cFileName);
	this->my_clear();
	do
	{
		if(NULL==term||(term&&!_tcsstr(ffd.cFileName,term))
		{
			if (ffd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
			{
				if(display) _tprintf(TEXT("  %s   <DIR>\n"), ffd.cFileName);
			}
			else
			{
				filesize.LowPart = ffd.nFileSizeLow;
				filesize.HighPart = ffd.nFileSizeHigh;
				if(display) _tprintf(TEXT("  %s   %lld bytes\n"), ffd.cFileName, filesize.QuadPart);
			}

			if(to_list)
			{
				size=_tcslen(ffd.cFileName);
				size+=sizeof(DIR_T);
				this->allot(size,(void **)&p_name);
				_tcscpy((DIR_T *)p_name,(DIR_T *)p_dirent->d_name);
				this->name_list.push_back((DIR_T *)p_name);
			}
		}
	} while (FindNextFile(hFind, &ffd) != 0);

	FindClose(hFind);
	return 0;
}
#endif

int Cpath::my_clear(void *p)
{	
	DIR_T * i;
	while (!name_list.empty())
	{
		i=name_list.back();
#if PATH_TEST
		cout<<i<<endl;	//display the name_list
#endif
		if(i)delete[](i);
		name_list.pop_back();
	}
	this->name_list.clear();
	return 0;
}

#if PATH_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	cout << "PATH_TEST\n\n";
	Cpath p;
	p.list((DIR_T *)".",(DIR_T*)".cpp",0);
//	p.list((DIR_T *)".",(DIR_T*)".h");
//	p.list((DIR_T *)".");
	return 0;
}
#endif 
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
int Cpath::list(DIR_T *dir_name)
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

#if WINDOWS_OS
int Cpath::list(DIR_T *dir_name)
{
	WIN32_FIND_DATA ffd;//FindFileData
	LARGE_INTEGER filesize;
	HANDLE hFind = INVALID_HANDLE_VALUE;
	TCHAR szDir[MAX_PATH];
	size_t length_of_arg;

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

	_tprintf(TEXT("The first file found is %s\n"), ffd.cFileName);

	do
	{
		if (ffd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
		{
			_tprintf(TEXT("  %s   <DIR>\n"), ffd.cFileName);
		}
		else
		{
			filesize.LowPart = ffd.nFileSizeLow;
			filesize.HighPart = ffd.nFileSizeHigh;
			_tprintf(TEXT("  %s   %lld bytes\n"), ffd.cFileName, filesize.QuadPart);
		}
	} while (FindNextFile(hFind, &ffd) != 0);

	FindClose(hFind);
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
	p.list((DIR_T *)".");

	return 0;
}
#endif 
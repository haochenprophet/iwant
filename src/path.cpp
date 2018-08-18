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
	std::cout<<"Cpath::~Cpath()\n";
#endif
	this->my_clear();
}

#if LINUX_OS
int Cpath::list(DIR_T *dir_name,DIR_T *term,int display,int to_list, int recursive)
{
	if (!term) return -1;
	DIR *p_dir;	
	DIR_T *p_name;
	struct dirent *p_dirent;
	int size;

	if((p_dir=opendir(dir_name))==NULL) return -1;
	this->my_clear();
	while((p_dirent=readdir(p_dir)))
	{
		if(display) std::cout<<p_dirent->d_name<<endl;

		if (p_dirent->d_type & DT_DIR)
		{
			if (display) printf(" %s   <DIR>\n", p_dirent->d_name);

			if (recursive)
			{
				string s_dir = dir_name;
				s_dir += (char *) "/";
				s_dir += p_dirent->d_name;
				if (strcmp((char *)".", p_dirent->d_name) != 0 && strcmp((char *)"..", p_dirent->d_name) != 0)
				{
					if (display)AT_LINE;
					this->list((DIR_T *)s_dir.c_str(), term, display, to_list, recursive);
				}
			}
			continue;//<DIR name not add ro list>
		}
		if (term && !strstr(p_dirent->d_name, term)) continue;
		if(to_list)
		{
			size=strlen(p_dirent->d_name);
			size+=sizeof(DIR_T);
			if(this->allot(size,(void **)&p_name)>=size)
			{
				strcpy((char*)p_name,(char*)p_dirent->d_name);
				this->name_list.push_back((char *)p_name);
			}
		}
	}

	closedir(p_dir);
	return 0;
}
#endif

#if WINDOWS_OS
int Cpath::list(DIR_T *dir_name,DIR_T *term,int display,int to_list, int recursive)
{
	if (!term) return -1;
	WIN32_FIND_DATA ffd;//FindFileData
	LARGE_INTEGER filesize;
	HANDLE hFind = INVALID_HANDLE_VALUE;
	TCHAR szDir[MAX_PATH];
	size_t length_of_arg;

	DIR_T *p_name;
	size_t size;
	// Check that the input path plus 3 is not longer than MAX_PATH.
	// Three characters are for the "\*" plus NULL appended below.

	StringCchLength(dir_name, MAX_PATH, &length_of_arg);

	if (length_of_arg > (MAX_PATH - 3))
	{
		_tprintf(TEXT("\nDirectory path is too long.\n"));
		return (-1);
	}

	if (display) _tprintf(TEXT("\nTarget directory is %s\n\n"), dir_name);

	// Prepare string for use with FindFile functions.  First, copy the
	// string to a buffer, then append '\*' to the directory name.

	StringCchCopy(szDir, MAX_PATH, dir_name);
	StringCchCat(szDir, MAX_PATH, TEXT("\\*"));
	if (display) _tprintf(TEXT("szDir=%s\n"), szDir);//test
	// Find the first file in the directory.

	hFind = FindFirstFile(szDir, &ffd);
	if (hFind == INVALID_HANDLE_VALUE) return -1;

	if(display) _tprintf(TEXT("The first file found is %s\n"), ffd.cFileName);
	this->my_clear();
	do
	{
		if (ffd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
		{
			if (display) _tprintf(TEXT("  %s/   <DIR>\n"), ffd.cFileName);
			if (recursive)
			{
				wstring w_dir = dir_name;
				w_dir += (wchar_t *) "/";
				w_dir += ffd.cFileName;
				if (wcscmp((wchar_t *)".", ffd.cFileName) != 0 && wcscmp((wchar_t *)"..", ffd.cFileName) != 0)
				{
					if (display)AT_LINE;
					this->list((DIR_T *)w_dir.c_str(), term, display, to_list, recursive);
				}
				else if (display) _tprintf(TEXT("wcscmp =  %s   <DIR>\n"), ffd.cFileName);
			}
			continue;
		}//if (ffd.dwFileAttributes 

		filesize.LowPart = ffd.nFileSizeLow;
		filesize.HighPart = ffd.nFileSizeHigh;
		if (display) _tprintf(TEXT("  %s   %lld bytes\n"), ffd.cFileName, filesize.QuadPart);

		if(NULL==term||(term&&_tcsstr(ffd.cFileName,term)))
		{
			if (to_list)
			{
				size = _tcslen(ffd.cFileName);
				size*= sizeof(DIR_T);
				size += sizeof(DIR_T);
				if(this->allot((int)size, (void **)&p_name)>=size)
				{
					wcscpy((DIR_T *)p_name, (DIR_T *)ffd.cFileName);
					this->name_list.push_back((DIR_T *)p_name);
				}
			}
		}
	} while (FindNextFile(hFind, &ffd) != 0);

	FindClose(hFind);
	return 0;
}
#endif //WINDOWS_OS

int Cpath::list(string * dir_name, string * term, int display, int to_list, int recursive)//get list to name_list
{
	if (dir_name->empty() || term->empty()) return -1;

#if WINDOWS_OS
	this->ws_url = this->s_ws(dir_name);
	this->ws_term = this->s_ws(term);
	return this->list((DIR_T*)this->ws_url.c_str(),(DIR_T*)this->ws_term.c_str(), display, to_list,  recursive);
#endif

#if LINUX_OS
	return this->list((DIR_T*)dir_name->c_str(), (DIR_T*)term->c_str(), display, to_list,  recursive);
#endif
}

int  Cpath::list(wstring *dir_name, wstring *term, int display, int to_list, int recursive)//get list to name_list
{
	if (dir_name->empty() || term->empty()) return -1;
#if WINDOWS_OS
	return this->list((DIR_T*)dir_name->c_str(), (DIR_T*)term->c_str(), display, to_list,  recursive);
#endif

#if LINUX_OS
	this->s_url = this->ws_s(dir_name);
	this->s_term = this->ws_s(term);
	return this->list((DIR_T*)this->s_url.c_str(), (DIR_T*)this->s_term.c_str(), display, to_list, recursive);
#endif
}

#if WINDOWS_OS
int Cpath::list(char* dir_name, char* term, int display, int to_list, int recursive)//get list to name_list
{
	if (!term) return -1;

	this->s_url = dir_name;
	this->s_term = term;
	if (this->s_url.empty() || this->s_term.empty()) return -1;
	return this->list(&this->s_url, &this->s_term, display, to_list, recursive);
}
#endif

int Cpath::list_s(int display, int to_list, int recursive)//get list to name_list
{
    return this->list((string *)&this->s_url, (string *)&this->s_term, display, to_list,  recursive);
}

int Cpath::list_ws(int display, int to_list, int recursive)//get list to name_list
{
	return this->list((std::wstring *) &this->ws_url, (std::wstring*)&this->ws_term, display, to_list,  recursive);
}

int Cpath::display(void *p)
{
	if (!p) return -1;

#if WINDOWS_OS
	_tprintf(TEXT("%s\n"), (TCHAR *)p);
#endif

#if LINUX_OS
	std::cout << (DIR_T *)p << endl;	//display the name_list
#endif
	return 0;
}

int Cpath::my_clear(void *p)
{	
	DIR_T * i;
	while (!name_list.empty())
	{
		i=name_list.back();
		if (PATH_TEST) this->display(i);
		if(i)delete[](i);
		name_list.pop_back();
	}
	this->name_list.clear();
	return 0;
}

int Cpath::execute(Object *o) //execute input func 
{
	if(this->name_list.empty()) return -1;
	NAME_LIST::iterator it;
	string s;
	for (it = this->name_list.begin(); it != this->name_list.end(); ++it)
	{

#if WINDOWS_OS
		s = this->wc_s((wchar_t*)*it);
#endif

#if LINUX_OS
		s = (char*)*it;
#endif
		//std::cout <<"s="<< s << endl;this->display(*it);//test ok 
		o->execute( (void*)&s);	//execute o->func 
	}
	return 0;
}

#if PATH_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "PATH_TEST\n\n";

#if WINDOWS_OS
	DIR_T *dir = L"../../src";//windows dir 
	DIR_T *term = L"";
#endif

#if LINUX_OS
	DIR_T *dir = (DIR_T *) ".";//linux dir 
	DIR_T *term =(char*) ".cpp";
#endif

	Cpath p;
	p.list(dir, term, 1);

	return 0;
}
#endif 
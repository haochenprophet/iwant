#ifndef OS_H 
#define OS_H 

#if WINDOWS_OS
#include <windows.h>
#include <tchar.h>
#include <strsafe.h>
#include <mysql.h>
typedef TCHAR DIR_T;//for class Cpath

#endif//WINDOWS_OS

#if LINUX_OS
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <dirent.h>
#include <mysql/mysql.h>
typedef char DIR_T;//for class Cpath
#endif//LINUX_OS

#include "object.h"

namespace n_os {
	class Cos:public Object
	{
	public:
		Cos();
		~Cos();

	#if WINDOWS_OS
		int init_winsock();
		void exit_winsock();
	#endif//WINDOWS_OS	
	};
}
using namespace n_os;

#endif//end OS_H 
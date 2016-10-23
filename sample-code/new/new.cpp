
#include <iostream>
#include <new>
using namespace std;
typedef int VAR_TYPE;

int main ()
{
	int size=1024*1024;
	VAR_TYPE *p;
	int n=1;
	while(1)
	{
		try{
			p=new VAR_TYPE[++n*size];
			cout<<"new:"<<n<<endl;
			if(p) delete[] p;
		}
		catch(...)
		{
			cout<<"new fail:"<<n<<endl;
			return 0;
		}
	}
	return 0;
}

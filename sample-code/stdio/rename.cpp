/* rename example */
#include <stdio.h>

int main (int argc,char *argv[])
{
	if(argc<3)
	{
		printf("rename <oldname> <newname>\n");
		return -1;
	}

  int result;

  result= rename(argv[1],argv[2]);
  if ( result == 0 )
    puts ( "File successfully renamed" );
  else
    perror( "Error renaming file" );
  return 0;
}

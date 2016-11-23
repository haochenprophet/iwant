/* remove example: remove myfile.txt */
#include <stdio.h>

int main (int argc,char *argv[])
{
	if(argc<2)
	{
		printf("remove <filename>\n");
		return -1;
	}

	if( remove(argv[1]) != 0 )
		perror( "Error deleting file" );
	else
		puts( "File successfully deleted" );
	return 0;
}

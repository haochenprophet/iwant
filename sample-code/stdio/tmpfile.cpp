/* tmpfile example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char buffer [256];
  FILE * pFile;
  pFile = tmpfile ();
  
  printf("press key input tmpfile data:(double 'entry' exit input)\n");

  do {
    if (!fgets(buffer,256,stdin)) break;
    fputs (buffer,pFile);
  } while (strlen(buffer)>1);

  rewind(pFile);

  while (!feof(pFile)) {
    if (fgets (buffer,256,pFile) == NULL) break;
    fputs (buffer,stdout);
  }

  fclose (pFile);
  return 0;
}
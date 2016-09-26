#include "object.h"

#if OBJECT_DEBUG
#include <stdio.h>
int main()
{
	return 0;
}
#endif

void * Object::getClass()
{
#if OBJECT_DEBUG
	printf("Object::getCalss() not available for base type.\n");
#endif
	return this;
}
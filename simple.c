#include <stdio.h>

int main()
{
	int intThing;
	char charThing;
	long longThing;
	float floatThing;
	double doubleThing;
	unsigned int unIntThing;
	unsigned char unCharThing;
	unsigned long unLongThing;
	int* intP;
	char* charP;
	long* longP;


	printf("Size of int: %ld bytes\n", sizeof(intThing));
	printf("Size of char: %ld bytes\n", sizeof(charThing));
	printf("Size of long: %ld bytes\n", sizeof(longThing));
	printf("Size of float: %ld bytes\n", sizeof(floatThing));
	printf("Size of double: %ld bytes\n", sizeof(doubleThing));
	printf("Size of unsigned int: %ld bytes\n", sizeof(unIntThing));
	printf("Size of unsigned char: %ld bytes\n", sizeof(unCharThing));
	printf("Size of unsigned long: %ld bytes\n", sizeof(unLongThing));
	printf("Size of int pointer: %ld bytes\n", sizeof(intP));
	printf("Size of char pointer: %ld bytes\n", sizeof(charP));
	printf("Size of long pointer: %ld bytes", sizeof(longP));

	return 0;
}
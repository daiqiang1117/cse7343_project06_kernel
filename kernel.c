/*	kernel.c
	A simple kernel that displays "Hello World"
	
	Qiang Dai
*/

/* display this string on the screen */
char str[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};

int segment = 0xB000;
int base_address = 0x8000;
int color_white = 0x07;

int main()
{
	int i;
	for(i = 0; str[i] != '\0'; i++)
	{
		putInMemory(segment, base_address + i, str[i]);
		putInMemory(segment, base_address + i + 1, color_white);
	}

	while(1)
	{
		//todo
	}
	return 0;
}
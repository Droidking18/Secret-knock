#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int		main(void)
{
	int i;

	i = 0;
	while (i == 0)
	{
	printf("%c\n", '\a');
	usleep(400000);
	printf("%c\n", '\a');
	usleep(230000);
	printf("%c\n", '\a');
	usleep(230000);
	printf("%c\n", '\a');
	usleep(350000);
	printf("%c\n", '\a');
	usleep(600000);
	printf("%c\n", '\a');
	usleep(300000);
	printf("%c\n", '\a');
	usleep(500000);
	}

}

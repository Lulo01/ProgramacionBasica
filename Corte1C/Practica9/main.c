#include <stdio.h>
#include <unistd.h>

int main()
{int count;
     for(count = 0; count <= 11; count++)
     {
     	printf("%d\n", count);
     	sleep(2);
	 }
	return 0;
}


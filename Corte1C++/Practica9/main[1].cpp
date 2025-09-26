#include <iostream>
#include <unistd.h>

using namespace std;

int main() 
{ for (int count = 0; count <= 10; count++)
{
	cout << count << endl;
	sleep(1);
}
	return 0;
}

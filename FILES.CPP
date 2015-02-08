#include <conio.h>
#include <iostream.h>
#include <fstream.h>

int main()
{
	clrscr();
	ifstream f1, f2;
	f1.open("country.txt");
	f2.open("capital.txt");
	char x1 [40], x2[40];
	for(int i = 0; i < 3; i++)
	{
	 f1>>x1;
	 f2>>x2;
	cout<<x1<<"  -->  "<<x2<<endl;
	}
	return 0;

}
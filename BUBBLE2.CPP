//program to bubble sort
#include <conio.h>
#include <iostream.h>

int main () {
int a [5] = {15,3,4,2,1};

clrscr();
cout<<"This is the original array"<<endl;

for (int i = 0; i<5; i++)
{
	cout<<a[i]<<endl;
}

//BUBBLE SORTING
for (i--; i>0; i--)
{
	for (int j = 0; j < i; j++)
	{
		if (a[j] > a[j+1]) {
			int r = a[j];
			a[j] = a[j+1];
			a[j+1] = r;
		}
	}
}


cout<<"This is the final array"<<endl;

for (i = 0; i<5; i++)
{
	cout<<a[i]<<endl;
}

getch();

return 0;
}
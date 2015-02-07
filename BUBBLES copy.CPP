#include <iostream.h>
#include <conio.h>

int main (){
int a[5] = {2,4,3,5,1};

int i;
int j;


for(i = 0; i<5; i ++)
{
	cout<<a[i]<<endl;
}

cout<<endl<<endl;
for (i--; i>0; i--)
{
	for(j = 0; j<i; j++)
	{
		if (a[j]>a[j+1])
		{
			int m = a[j];
			a[j] = a[j+1];
			a[j+1] = m;
		}
	}
}
for(; i<5; i ++)
{
	cout<<a[i]<<endl;
}
getch();
return 0;

}
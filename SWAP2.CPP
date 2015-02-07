#include <iostream.h>
#include <conio.h>

void swap(int * a, int * b);

int main(){
	clrscr();
	int a, b;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	swap (&a, &b);
	cout<<a<<b;
	getch();
return 0;
}

void swap(int * m, int * n)
{
int z = *m;
*m = *n;
*n = z;
}
#include <conio.h>
#include <iostream.h>
class complex{
	public :
	int a;
	int b;
	public :
	complex(int c)
	{
	      a = c;
	}
	void print(){
	cout<<"hello"<<a<<endl;
	}
};
int main(){
complex d(15);
int complex::*y = &complex::a;

complex * ap = &d;

cout<<ap->a<<"that was it with a star";
d.print();
d = 10;
d.print();
return 0;
}
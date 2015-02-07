#include <iostream.h>
#include <conio.h>
void swap(int&, int&);

class h{
	private:

	public:


};

int main(){
	int x = 5, y=7;
	swap(x,y);

       cout<<"Main function"<<endl<<x<<endl<<y<<endl;
	getch();
	return 0;

}
void swap(int& h, int& m)
{
       cout<<"before swap"<<h<<endl<<m<<endl;
       int *x=&h;
       int *y=&m;
       *x+=*y;
       *y=*x-*y;
       *x-=*y;
       cout<<"after, h, m"<<h<<endl<<m<<endl;
       cout<<"after, x, y"<<x<<y<<endl;


}
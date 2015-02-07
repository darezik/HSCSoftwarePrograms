#include <conio.h>
#include <math.h>
#include <iostream.h>

class circle
{
	public:
	circle(int r)
	{
		x=0;
		y=0;
		radius=r;
	}
	circle(int x1, int y1,int r)
	{
		x = x1;
		y = y1;
		radius = r;
	}
	double area();
	double circumference();

	private:
	int radius;
	int x;
	int y;
};

double circle::area()
{
	return (M_PI*radius*radius);
}

double circle::circumference()
{
	return (2*M_PI*radius);
}

int main()
{
	circle o(2,3,1);
	cout<<o.area()<<endl<<o.circumference()<<endl;
	getch();
	clrscr();

	return 0;
}
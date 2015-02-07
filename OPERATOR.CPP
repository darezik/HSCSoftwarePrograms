#include <iostream.h>
#include <conio.h>

class h{
	private:
	  int x;

	public:
	  h(){
	  x=1;
	  }

	  void operator + (){
	  x++;

	  }
	  void operator + (int r)
	  {
	  x+=r;

	  }
	  void display(){
	  cout<<x<<endl;
	  }

};

int main(){
	h m;
	+m;
	m.display();
	m+5;
	m.display();
	return 0;
}
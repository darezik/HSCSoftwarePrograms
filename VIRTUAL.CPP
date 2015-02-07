#include <iostream.h>
#include <conio.h>

class h{
	private:
	 int x;
	public:
	 int y;
	 virtual int display();

};
int h::display(){
cout<<"this is class h"<<endl;
return 0;
}
class l:public h{
public:
void display(){
   cout<<"this is l"<<endl;
   } };

int main(){
	h obh;
	l obl;
	h *ph = &obh;
	l *pl = &obl;
	int z = pl -> display();
	ph -> display();
	obl.display();
	obh.display();
	getch();
	return 0;
}
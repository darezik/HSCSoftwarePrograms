#include <iostream.h>
#include <conio.h>

int main()                     {

	int min (int no1, int no2);

	int b;
	int a;
	cout<<"please enter 4 values"<<endl;
	cin>>a;
	for (int i = 0; i<3;i++)
	{
	cin >>b;
	a = min(a,b);
	}
	cout << "The minimum value is "<< a<<endl;
	return 0;
	}
	int min(int no1, int no2){
	if (no1<  no2){
	return no1;
	}else{
	return no2;
	}
	}


int min(){

	return 0;
}
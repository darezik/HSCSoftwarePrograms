#include <conio.h>
#include <iostream.h>

class complex
{
  private:
    int r;
    int i;


  public:

    complex(int x, int y)
    {
      r = x;
      i = y;
    }

    void print()
    {
      cout<<r<<" + "<<i<<"i"<<endl;
    }

    complex operator + (complex c);

};

complex complex::operator + (complex c)
{
  complex z(r,i);
  z.r = r + c.r;
  z.i = i + c.i;
  return z;
}

int main()
{
  complex a(1,2);
  complex b(3,4);
  complex m = (a + b);
  m.print();
  return 0;
}

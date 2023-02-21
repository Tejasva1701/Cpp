//Program 10: Implement Operator Overloading using member function and friend function

#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A(){
    	a = 0;
    	b = 0;
	}
    A(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    A operator+(A op2);                          // operator overload using member function
    friend A operator-(A op1, A op2);           // operator overload using friend function
    void display();
};

A operator-(A op1, A op2)
{

    A temp;

    temp.a = op1.a - op2.a;
    temp.b = op1.b - op2.b;
    return temp;
}

A A::operator+(A op2)
{
    A temp;

    temp.a = a + op2.a;
    temp.b = b + op2.b;
    return temp;
}

void A::display()
{
    cout << a << ", ";
    cout << b << " " << endl;
}

int main()
{
    A x(4, 5), y(2,3), z;

    x.display();
    y.display();
    z = x + y; 
    z.display();
    z = x - y;
    z.display();
    return 0;
}



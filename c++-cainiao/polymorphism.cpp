#include <iostream>
using namespace std;
/*
多态的测试类
*/

class Sahpe
{
protected:
	int width,height;
public:
	Sahpe(int a =0,int b=0)
	{
		width = a;
		height = b;
	}
	int area ()
	{
		cout << "parent class area" <<endl;
		return 0;
	}
};

class RectAngle : public Sahpe
{
	public:
		RectAngle(int a=0,int b=0):Sahpe(a,b){}

		int area()
		{
			cout << "RectAngle class area:" << endl;
			return (width * height);
		}

};

class Triangle : public Sahpe
{
public:
	Triangle(int a = 0,int b=0):Sahpe(a,b){}

	int area()
	{
		cout << "Triangle class area : "<< endl;
		return (width * height / 2);
	}
};

int main()
{
	Sahpe *s1;
	RectAngle r1(10,7);
	Triangle t1(10,5);

	s1 = &r1;

	s1 -> area();

	s1 = &t1;
	s1 -> area();
	return 0;
}
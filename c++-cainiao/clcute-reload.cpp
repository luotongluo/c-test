#include <iostream>
using namespace std;

class Box
{
	public :
	double getVolum(void)
	{
		return length * breadth * height;
	}
	void setLength(double l)
	{
		length = l;
	}
	void setBreadth(double b)
	{
		breadth = b;
	}
	void setHeight(double h)
	{
		height = h;
	}

	Box operator+(const Box& b)
	{
		Box x;
		x.length = this -> length + b.length;
		x.height = this -> height + b.height;
		x.breadth = this -> breadth + b.breadth;
		return x;
	}
	private:
		double length;
		double breadth;
		double height;
}
};


int main()
{
	Box b1,b2,b3;
	double volume = 0.0;

	b1.setHeight(5.0);
	b1.setBreadth(7.0);
	b1.setLength(6.0);

	b2.setHeight(10.0);
	b2.setBreadth(13.0);
	b2.setLength(12.0);

	volume = b1.getVolum();
	cout << "b1.volume :" << volume << endl;

	volume = b2.getVolum();
	cout << "b2.getVolum() :" << volume << endl;

	b3 = b1 + b2;
	volume = b3.getVolum();
	cout << "b3.getVolum() :" << volume << endl;
	return 0;
}
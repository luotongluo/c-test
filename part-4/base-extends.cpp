#include<iostream>

using namespace std;

class Shape
{

public:
	void setWidth(int w){
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}

protected:
	int width;
	int height;
};

class Rectangle : public Shape
{
	public :
	int getArea()
	{
		return (width * height);
	}
};

int main()
{
	Rectangle rect;
	rect.setHeight(5);
	rect.setWidth(7);

	cout << "total area :" << rect.getArea() << endl;

	return 0;
}
#include<iostream>

using namespace std;
/*
派生类可以控制积累中所有的给私有成员
因此积累中的成员如果不想被派生类的成员变量控制
可以声明为private类型。
*/
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
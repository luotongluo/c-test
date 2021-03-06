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
	Shape()
	{
		cout << "Shape 构造函数"<<endl;
	}
	~Shape()
	{
		cout << "Shape 析构函数"<<endl;
	}
protected:
	int width;
	int height;
};

class PaintCost
{
public:
	int getCost(int area)
	{
		return area * 70;
	}
	PaintCost()
	{
		cout << "PaintCost 构造函数"<<endl;
	}
	~PaintCost()
	{
		cout << "PaintCost 析构函数"<<endl;
	}
};
class Rectangle : public Shape,public PaintCost
{
	public :
	int getArea()
	{
		return (width * height);
	}
	Rectangle()
	{
		cout << "Rectangle 构造函数"<<endl;
	}
	~Rectangle()
	{
		cout << "Rectangle 析构函数"<<endl;
	}
};

int main()
{
	Rectangle rect;
	rect.setHeight(5);
	rect.setWidth(7);

	cout << "total area :" << rect.getArea() << endl;
	cout << "total cost:$"  << rect.getCost(rect.getArea()) << endl;

	return 0;
}
#include<iostream>
using namespace std;
class PrintData
{
public:
	void print(int i)
	{
		cout << "整数为：" << i << endl;
	}
	void print(double f)
	{
		cout << "double为：" << f << endl;
	}
	void print(char c[])
	{
		cout << "char为：" << c << endl;
	}
};

int main()
{
PrintData p;

p.print(5);
p.print(123.22);
char[] c = "hello c++";
p.print(c);
return 0;
}
#include <stream>
using namespace std;

void func(void);

//定义全局变量
static int count =10;

int main()
{
    while (count --)
        {
        func();
        }
    return 0;
}
void func()
{
 static int i =5;
 i++;
 cout << "变量I为： " << i << endl;
 cout << "变量count 为：" << count << endl;
}
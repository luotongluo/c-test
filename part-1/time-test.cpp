#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	//基于当前系统的当前日期/时间
	time_t  now = time(0);

	//把now转换为字符串形式
	char* dt = ctime(&now);

	cout << "本地时间和日期："<< dt << endl;

	tm *gmtm = gmtime(&now);
	dt = asctime(gmtime);
	cout << "UTC 日期和时间" << dt << endl;
	
}
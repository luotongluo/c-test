#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(){
	
	string s1 = "c++语言";
	string s2 = "程序设计";
	string s3 = s1 + s2;
	string s4;
	
	s4 = s1.append(s2);
	
	if(s3 == s4){
		cout << "结果相同" << endl;
	} else {
		cout << "结果不相同" << endl;
	}
	int size = s1.size();
	int length = s1.length();
	cout << "size = " << size << ",length=" << length << endl;
	
	//设置s1中你那个的第一个位置是j
	s1[0] = 'j';
	//将s1中的从第四个字符开始后面的四个字符取出，传递给s5
	string s5 = s1.substr(3,4);
	char str[20];
	//将s5的字符串复制到str
	strcpy(str,s5.c_str());
	cout << "str = " << str << endl;
	cout << "s1 = " << s1 <<  "s2 = " << s2 << endl;
	//s1 和s2 相互交换
	s1.swap(s2);
	cout << "s1 = " << s1 <<  "s2 = " << s2 << endl;
	cout << "str = " << str << endl;
	cout << "s2 = " << s2 << endl;
	cout << s2.find(str) << endl;
	return 0;
}
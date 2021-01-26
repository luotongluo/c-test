#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	if (str.empty()){
		cout << "str is null." << ",length" << str.length() << endl;
	} else {
		cout << "str not null" << endl;
	}
	str = str.append("abcdef");
	cout << "str is \t" << str << ",size = " << str.size() << endl;
	//c_str 方法将str转换为const char赋予指针p
	const char *p = str.c_str();
	cout << "p=" << p << endl;
	//从0的下标开始查找cd
	cout << "find:" << str.find("cd",0) << endl;
	cout << "find:" << str.find("cd",2) << endl;
	string str1 = str.insert(4,"123");
	cout << str1 << endl;
	return 0;
}
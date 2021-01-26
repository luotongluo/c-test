#include<iostream>
#include<string>

using namespace std;


class MyDate{
	public:
	MyDate();
	MyDate(int);
	MyDate(int,int);
	MyDate(int,int,int);
	void setBirthday(MyDate);
	void setBirthday(int,int,int);
	void setDate(int a,int b,int c){
		year = a;
		month = b;
		day = c;
	}
	void printDate() const{
		cout << year << month << day << endl;
	}
	private:
	int year,month,day;
};
MyDate::MyDate(){
	year = 1970;
	month = 1;
	day = 1;
	
};

//在类体外定义成员函数
 MyDate::MyDate(int d) :year(1970),month(1){
	day = d;
}
 MyDate::MyDate(int m,int d) :year(1970){
	day = d;
	month = m;
} 
MyDate::MyDate(int y,int m,int d){
	day = d;
	month = m;
	year = y;
}
void MyDate::setBirthday(MyDate data){
	year = data.year;
	month = data.month;
	day = data.day;
	return;
}
void MyDate::setBirthday(int y,int m,int d){
	day = d;
	month = m;
	year = y;
}
class Student{
	public:
	Student();
	Student(string);
	void setStudet(string,MyDate);
	void setStudet(string);
	void setName(string);
	string getName();
	void setBirthday(MyDate);
	MyDate getBirthday();
	void printStudet() const;
	private:
	string name;
	MyDate birthday;
};
Student::Student() :name(":none"),birthday(MyDate()){};
Student::Student(string n) :name(n),birthday(MyDate()){};

void Student::setStudet(string s,MyDate data){
	name = s;
	birthday.setBirthday(data);
	//birthday.setBirthday(1971,9,12);
}
void Student::setStudet(string s){
	name = s;
	//birthday.setBirthday(data);
	birthday.setBirthday(1971,3,14);
}
void Student::setName(string s){
	name = s;
}
string Student::getName(){
	return name;
}
void Student::setBirthday(MyDate data){
	birthday.setBirthday(data);
	//birthday.setBirthday(1982,3,14);
	return;
}
MyDate Student::getBirthday(){
	return birthday;
}
void Student::printStudet() const{
    cout << "姓名：" << name << "\t 生日：" ;
	birthday.printDate();
	cout << endl;
}


int main(){
	Student stu;
	Student ss[2];
	MyDate mdt;
	int m,y,d,i;
	string name1;
	
	stu.printStudet();
	
	for(i = 0; i < 2 ; i++){
		ss[i].printStudet();
	}
	
	for(i = 0; i < 2 ; i++){
		cout << "请输入姓名和生日（顺序 年 月ri））";
		cin >> name1 >> y>>m>>d;
		
		ss[i].setStudet(name1,MyDate(y,m,d));
		ss[i].printStudet();
	}
	for(i = 0; i < 2 ; i++){
		//打印出来的和上面循环中的结果不一致
		
		ss[i].printStudet();
		return 0;
	}
}
#include <iostream>
#include <string>

using namespace std;

class MyDate{
	public:
	MyDate();
	MyDate(int,int,int);
	void setDate(int,int,int);
	void setDate(MyDate);
	void setBirthday(MyDate);
	MyDate getDate();
	void setYear(int);
	int getMonth();
	void printDate() const;
	private:
	int year,month,day;
};

MyDate::MyDate(){
	year = 1970;
	month = 1;
	day = 1;
	
};

MyDate::MyDate(int y,int m,int d){
	year = y;
	month = m;
	day = d;
}

void MyDate::setDate(int y,int m,int d){
	year = y;
	month = m;
	day = d;
	return;
}

void MyDate::setDate(MyDate data){
	year = data.year;
	month = data.month;
	day = data.day;
	return;
}
void MyDate::setBirthday(MyDate data){
	year = data.year;
	month = data.month;
	day = data.day;
	return;
}

MyDate MyDate::getDate(){
	return *this;
	
}

void MyDate::setYear(int y){
	year = y;
	return;
}

int MyDate::getMonth(){
	return month;
}

void MyDate::printDate() const{
	cout << year << "/" << month << "/" << day;
	return;
}

class Student{
	public:
	void setStudet(string,MyDate);
	void setName(string);
	string getName();
	void setBirthday(MyDate);
	MyDate getBirthday();
	void printStudet() const;
	private:
	string name;
	MyDate birthday;
};
void Student::setStudet(string s,MyDate data){
	name = s;
	birthday.setBirthday(data);
}
void Student::setName(string s){
	name = s;
}
string Student::getName(){
	return name;
}
void Student::setBirthday(MyDate data){
	birthday.setBirthday(data);
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
	MyDate d;
	Student s;
	s.setStudet("zhangsan",d);
	s.printStudet();
	
	MyDate d1 = s.getBirthday();
	d1.printDate();
	
	string ame = s.getName();
	cout << "ame" << ame << endl;
	
	d.setDate(2021,1,2);//y,m.d
	s.setStudet("wangwu",d);
	
	s.printStudet();
	
	MyDate d2 = s.getBirthday();
	d2.printDate();

	 ame = s.getName();
	cout << "ame" << ame << endl;
	
	return 0;
}









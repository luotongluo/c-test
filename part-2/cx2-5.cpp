#include<iostream>
#include<string>
using namespace std;
/*
员工中的对象
*/
class CEmployee{
	public:
	void setname(string);
	string getname();
	void setSalary(int);
	int getSalary();
	int averGetSalary(CEmployee);
	
	private:
	string szName;
	int salary;
};
void CEmployee::setname(string name){
	szName = name;
}
string CEmployee::getname(){
	return szName ;
}
void CEmployee::setSalary(int s){
	salary = s;
}
int CEmployee::getSalary(){
	return salary ;
}
int CEmployee::averGetSalary(CEmployee empl){
	return (salary + empl.getSalary()) / 2 ;
}

int main(){
	CEmployee use1,use2;
	
	use1.setname("123");
	use1.setSalary(222);
	cout << use1.getname() << endl;
	
	use2.setname("22222");
	use2.setSalary(334);
	cout << use2.getname() << endl;
	
	cout << "ever " << use1.averGetSalary(use2) << endl;
	return 0;
}
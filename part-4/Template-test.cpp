#include<iostream>
using namespace std;
template <typename T>
T max(T m1 , T m2)
	{
	return (m1>m2)?m1:m2;
	}
template<typename T>
T min(T m1 , T m2)
	{
	return(m1<m2)? m1:m2;
	}
void main()
	{
	cout<<max("abc" , "aBC")<<endl;
	cout<<min(2.3 , 5.8)<<endl;
	cout<<min<int>(8 , 3)<<endl;
	}

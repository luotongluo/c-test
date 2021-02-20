#include<iostream>
using namespace std;
template <typename T>
T max(T m1,T m2)
{
    return (m1 > m2) ? m1 : m2;
}

template <typename T>
T min(T m1,T m2)
{
    return (m1 > m2 )? m2 : m1;
}
void main()
{
    cout << max("abc","aBc") << endl;
    cout << min("abc","aBc") << endl;
    cout << min<int>(1.2,3.4) << endl;
}
#include <iostream>
using namespace std;

int count;
extern coid write_extern();
int main()
{
count = 5;
write_extern();
return 0;
}
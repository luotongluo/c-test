#include <iostream>
using namespace std;
class Pointer{
public:
int a;
int *p;
Pointer(){
a = 10;
p = new int(20);
}
Pointer(const Pointer &p){
if(this != p){
a = p.a;
p = p.p;
}
}
}
int main(){

}
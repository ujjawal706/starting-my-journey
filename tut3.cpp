// there are two types of header files
// 1. system header files: it comes with the complier
#include<iostream>
// #include "this.h"  //--> this will produce an error if this.his no present in the current directory

using namespace std;

int main (){
    int a=4, b =7;
    cout<< "oprators in c++:"<<endl;
    cout<<"following are the operators in c++"<<endl;
    //arthmetic operators
    cout<<" the value of a + b is "<<a+b<<endl;
    cout<<" the value of a - b is "<<a-b<<endl;
    cout<<" the value of a * b is "<<a*b<<endl;
    cout<<" the value of a / b is "<<a/b<<endl;
    cout<<" the value of a % b is "<<a%b<<endl;
    cout<<" the value of a ++ is "<<a++<<endl;
    cout<<" the value of a -- is "<<a--<<endl;
    cout<<" the value of ++a  is "<<++a<<endl;
    cout<<" the value of --a  is "<<--a<<endl;
    return 0;
}
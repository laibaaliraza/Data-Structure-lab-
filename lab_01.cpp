#include<iostream>
using namespace std;
void funcA(){
    int *ptr1 =new int(10);
    auto funcB=[](){
        int *ptr2=new int (20);
        cout<<"Pointer in function B is: "<<*ptr2<<endl;
        delete ptr2;
    };
    cout<<"Pointer in function A is: "<<*ptr1<<endl;
    delete ptr1;
    funcB();
}
int main(){
cout<<"This is main function"<<endl;
funcA();
return 0;
}
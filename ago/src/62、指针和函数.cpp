#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}

void swap02(int*p1 ,int*p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;

}
int main(){
//实现两个数字进行交换
int a=10;
int b=20;
swap(a,b);

cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;


//2、地址传递  如果是地址传递可以修饰我们的实参
swap02(&a,&b);
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;

    system("pause");
    return 0;
}
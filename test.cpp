#include<iostream>
using namespace std;

void print(int *p,int n)    	        // 输出一维数组
{
    for(int i=0;i<n;i++){
        //**********found**********
        cout<<p[i]<<'\t';
        if((i+1)%5==0)cout<<'\n';
    }
    cout<<'\n';
}

int fun(int *p1,int n1,int *p2,int n2)  // 把p1合并到p2中，并返回合并后的元素个数
{
	int i,j,k;
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++)               // 查找插入位置j
            if(p1[i]<p2[j])break;
        if(j>=n2) {                     // 将p1[i]插入数组p2的末尾              
            //**********found**********
            p2[j]=p1[i];
            n2++;
        }
        else{                           // 将p1[i]插入数组p2[j]的位置，j不在末尾 
            for( k=n2;k>j;k--)
                //**********found**********
                p2[k]=p2[k-1];
                p2[k]=p1[i];
                n2++;
        }
    }
    return n2;
}

int main(void )
{
    int a[10]={3,5,9,15,25,30},b[20]={1,2,8,10,16,18,20};
    int len;
    cout<<"原第1个数组是:\n";
    print(a,6);         // 输出数组a
    cout<<"原第2个数组是:\n";
    print(b,7);         // 输出数组b
    //**********found**********
    len=fun(a,6,b,7);    // 合并数组a和数组b
    cout<<"合并后的数组是：\n";
    print(b,len);       // 输出合并后的数组
	system("pause");
    return 0;
}
#include<iostream>
using namespace std;
//冒泡排序
void bubblesort(int*arr,int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}
//打印数组
void printArray(int*arr,int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main(){

    //1、先创建一个数组
int arr[10]={4,2,5,3,7,8,9,4,1,6};
    //2、创建一个函数，实现冒泡排序
int len=sizeof(arr)/sizeof(arr[0]);
bubblesort(arr,len);
    //3、打印排序后的数组
printArray(arr,len);







    system("pause");
    return 0;
}
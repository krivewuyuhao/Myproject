#include<iostream>
using namespace std;
int main(){
//if 和switch区别？
//switch 缺点,判断的时候只能是整形或者字符型，不可以是一个区间
//优点：结构清晰，执行效率高



//switch语句
//作用：执行多条件分支的语句
//给电影进行打分
//10 9 经典
//8 7  非常好
//6 5  一般
//5以下    差

//1、提示用户给电影评分

cout<<"请给电影进行打分"<<endl;

//2、用户开始进行打分

int score=0;
cin >>score;
cout<<"你打的分数为"<<score<<endl;
//3、根据用户输入的分数来提示用户最后的结果

switch(score)
{
    case 10:
    cout<<"你认为是经典电影"<<endl;
    break; //退出当前分支
    case 9:
    cout<<"你认为是经典电影"<<endl;
    break;
    case 8:
    cout<<"你认为电影非常好"<<endl;
    break;
    case 7:
    cout<<"你认为电影一般般"<<endl;
    break;
    case 6:
    cout<<"你认为电影一般"<<endl;
    break;
    default:
    cout<<"你认为是烂片"<<endl;
    break;

}

















system("pause");

  return 0;
}
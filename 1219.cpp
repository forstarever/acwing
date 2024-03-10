//
// Created by star on 2024/2/28.
//

#include <iostream>
#include <cmath>
using namespace std;
int w,m,n;
void fun(int &x,int &y,int m)
{
    x=(m-1)/w+1;
    if(x&1){
        y=(m-1)%w+1;
    }else
        y=(w+1-m%w)%w;
//    printf("%d %d %d\n",x,y,m);
}
// 0  1  2 3 4 5
// 11 10 9 8 7 6
void fun1(int &x,int &y,int m)
{
    x=(m-1)/w;
    if(x&1){
        y=(w-m%w)%w;
    }else
        y=(m-1)%w;
//    printf("%d %d %d\n",x,y,m);
}
int main() {
    cin>>w>>m>>n;
    int x1,y1,x2,y2;
//    fun1(x1,y1,6);
//    fun1(x1,y1,12);
//    fun1(x1,y1,13);
//    fun1(x1,y1,15);
    fun1(x1,y1,m);
    fun1(x2,y2,n);
    printf("%d\n",abs(x1-x2)+abs(y1-y2));
    return 0;
}
//
// Created by star on 2024/2/28.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
string s;
string y1="19",y2="20";
string MIN="1960-01-01",MAX="2059-12-31";
//vector<string> q;
priority_queue<string,vector<string>,greater<>> q;
int days[]={-1,31,28,31,30,31,30,31,31,30,31,30,31};
void add(string a,string b,string c)
{
    string year,tmp;
    if(a>="60" && a<="99")
        year=y1+a;
    else
        year=y2+a;
    int y= atoi(year.c_str());
    int mon=atoi(b.c_str());
    int day=atoi(c.c_str());
    if(y%4==0 && y%100!=0 || y%400==0)
    {
        if(mon==2 && day>=1 && day<=29){
            tmp=year+"-"+b+"-"+c;
            q.push(tmp);
            return ;
        }
    }
    if(mon>=1 && mon<=12 && day>=1 && day<=days[mon]){
        tmp=year+"-"+b+"-"+c;
        q.push(tmp);
    }
    return ;
}
int main() {
    cin>>s;
    string a,b,c;
    a=s.substr(0,2);
    b=s.substr(3,2);
    c=s.substr(6,2);
    add(a,b,c);
    add(c,a,b);
    add(c,b,a);
    string tmp="";
    while(!q.empty()){
        string ss=q.top();
        if(ss!=tmp)
            cout<<ss<<endl;
        tmp=ss;//去重
        q.pop();
    }
    return 0;
}
//
// Created by star on 2024/2/25.
//

#include <iostream>
using namespace std;
int days[13]={-1,31,29,31,30,31,30,31,31,30,31,30,31};
int a,b;

int main() {
    cin>>a>>b;
    int res=0;
    for(int month=1;month<=12;month++){
        for(int day=1;day<=days[month];day++){
            int year= (day%10)*1000 + (day/10)*100+(month%10)*10+month/10;
            int date=10000*year+100*month+day;
            if(date>=a && date<=b)
                res++;
        }
    }
    printf("%d\n",res);
    return 0;
}
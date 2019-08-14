//
//  main.cpp
//  201812191001
//
//  Created by mac on 2018/12/19.
//  Copyright © 2018年 mac. All rights reserved.
//

#define MAX 2

#include <iostream>
#include <cstdlib>
using namespace std;
double average(int a,int b);
string tab("\t");

int main(int argc, const char * argv[]) {
    // insert code here...
    
    struct stu{
        char id[10];
        char name[10];
        int math;
        int eng;
        double avg;
    }s[MAX];
    
    for(int i=0;i<MAX;i++){
        cout<<"請輸入"<<i+1<<"學號：";
        cin>>s[i].id;
        cout<<"請輸入"<<i+1<<"姓名：";
        cin>>s[i].name;
        cout<<"請輸入"<<i+1<<"數學成績：";
        cin>>s[i].math;
        cout<<"請輸入"<<i+1<<"英文成績 ：";
        cin>>s[i].eng;
        s[i].avg=average(s[i].math,s[i].eng);
    }
    
    cout<<"學號："<<tab<<"姓名："<<tab<<"數學成績："<<tab<<"英文成績 ："<<tab<<"平均："<<endl;
    
    for(int i=0;i<MAX;i++){
        printf("%6s %3s",s[i].id,s[i].name);
        cout<<tab<<tab<<s[i].math<<tab<<tab<<tab<<s[i].eng<<tab<<tab<<tab<<s[i].avg<<endl;
    }
    
    return 0;
}


double average(int a,int b){
    int sum=a+b;
    double avg=sum/2.0;
    return avg;
}

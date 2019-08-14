//
//  main.cpp
//  201812190936
//
//  Created by mac on 2018/12/19.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    struct stu{
        int id;
        char name[10];
        double score;
        char cls;
    }a1={123456,"yang",123.456,'a'},a2;

    struct stu a3={789,"you",789.1,'c'};
    a2.id=456;
    cout<<"Please enter the name:";
    cin>>a2.name;
    a2.score=456.789;
    a2.cls='b';
    
    cout<<"a1.id="<<a1.id<<endl
        <<"a1.name="<<a1.name<<endl
        <<"a1.score="<<a1.score<<endl
        <<"a1.cls="<<a1.cls<<endl;
    cout<<"a2.id="<<a2.id<<endl
        <<"a2.name="<<a2.name<<endl
        <<"a2.score="<<a2.score<<endl
        <<"a2.cls="<<a2.cls<<endl;
    cout<<"a3.id="<<a3.id<<endl
        <<"a3.name="<<a3.name<<endl
        <<"a3.score="<<a3.score<<endl
        <<"a3.cls="<<a3.cls<<endl;

    return 0;
}

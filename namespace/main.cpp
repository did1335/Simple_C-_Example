//
//  main.cpp
//  201901090936
//
//  Created by mac on 2019/1/9.
//  Copyright © 2019年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int var1=1;
float var2=10.2;

namespace  name1{

class Box
{
    
private:
    char id;
    int width;
    int length;
    int height;
    int v;
    
public:
    
    Box(void)
    {
        id='Z';
        length=100;
        width=100;
        height=100;
        v=length*width*height;
    }
    
    Box(int w,int l,int h):id('X'),width(w),length(l),height(h)
    {
        v=l*w*h;
    }
    
    
    Box(char id_1,int l,int w,int h):id(id_1),length(l),width(w),height(h)
    {
        v=l*w*h;
    }
    
    ~Box()
    {
        
    }
    
    
    friend void show(Box W)
    {
        cout<<"volume num="<<W.id<<"\t"
        <<"length="<<W.length<<"\t"
        <<"width="<<W.width<<"\t"
        <<"height="<<W.height<<"\t"
        <<"volume="<<W.v<<endl;
    }
};
    
}

namespace name2 {
    int var1=100;
    float var2=3.1415;
}

namespace name3 {
    int var1=1000;
    float var2=25.4;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    cout<<"標準命名空間的var1="<<var1<<endl;
    cout<<"標準命名空間的var2="<<var2<<endl;
    cout<<"命名空間2的var1="<<name2::var1<<endl;
    cout<<"命名空間2的var2="<<name2::var2<<endl;
    cout<<"命名空間3的var1="<<name3::var1<<endl;
    cout<<"命名空間3的var2="<<name3::var2<<endl;
    

    using namespace name1;
    Box v[5]={{'A',100,100,100},{'B',500,500,500},{'C',200,200,200},{'D',300,300,300},{'E',600,500,300}};
    //name1::Box v[5]={{'A',100,100,100},{'B',500,500,500},{'C',200,200,200},{'D',300,300,300},{'E',600,500,300}};

    for (int i=0;i<5;i++)
        show(v[i]);
    
    
    return 0;
}


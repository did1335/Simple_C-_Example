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

class vol
{
friend void show (vol W);

private:
    char id;
    int width;
    int length;
    int height;
    int v;
    
public:
    
    //建構元多載(2個以上建構元）
    vol()
    {
        id='Z';
        width=100;
        length=100;
        height=100;
        v=width*length*height;
    }
    
    vol(int w,int l,int h):id('X'),width(w),length(l),height(h)//可於冒號後做指定
    {
        v=w*l*h;
    }
    
   
    
    /*vol(int w,int l,int h)
    {
        id='X';
        width=w;
        length=l;
        height=h;
        v=w*l*h;
    }*/
    
    vol(char id_1,int w,int l,int h)
    {
        id=id_1;
        width=w;
        length=l;
        height=h;
        v=w*l*h;
    }
    
    /*
     物件有給值時用給的值，沒有用初值，給的值不足時按照順序
    vol(char id_1='Z',int w=100,int l=100,int h=100)
    {
        id=id_1;
        width=w;
        length=l;
        height=h;
        v=w*l*h;
    }
     */
    
    ~vol()
    {
        
    }
    
    friend void show(vol W)
    {
        cout<<"volume num="<<W.id<<"\t"
        <<"width="<<W.width<<"\t"
        <<"length="<<W.length<<"\t"
        <<"height="<<W.height<<"\t"
        <<"volume="<<W.v<<endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    vol a1('A',100,100,100);
    vol a2('B',500,500,500);
    vol a3(200,200,200);
    vol a4;
    vol b[3]={{'A',100,100,100},{'B',500,500,500},{'C',200,200,200}};
    show(a1);
    show(a2);
    show(a3);
    show(a4);
    cout<<endl;
    for (int i=0;i<3;i++)
        show(b[i]);
    
    
    return 0;
}

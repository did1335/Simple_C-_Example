//
//  main.cpp
//  201810241046
//
//  Copyright © 2018年 mac. All rights reserved.
//

#include "Header.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "1~1000的質數" << endl;
    int i,j;
    for(i=1;i<=1000;i++){
        
        while(i<1)
            break;
        
        while(i==1){
            cout<<"1為單位數"<<endl;
            break;
        }
        
        while(i==2){
            cout<<i<<" ";//2本身為質數(2是質數中的特例)
        break;
        }
        
        if(i>2){
        for (i=2; i<=1000; i++)//取２～１０００的質數
         for (j=2; j<i; j++)
         {
            if (i % j == 0)//若可與２以上的數整除即為合數
                break;
            else if (!(i % j == 0) && i == j+1)//非合數且每一數值執行到最後一次時才顯示
                cout << i << " ";
         }
        }
    }
    
    return 0;
}

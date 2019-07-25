//
//  main.cpp
//  201812120919
//
//  Created by mac on 2018/12/12.
//  Copyright © 2018年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, const char * argv[]) {
        int a[2][3];
        srand(time(NULL));

        for (int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                *((*a+i)+j)=rand()%101;
                cout<<*((*a+i)+j)<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        
        for (int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                *((*a+i)+j)=10;
                cout<<*((*a+i)+j)<<endl;
            }
        }
        
    
}



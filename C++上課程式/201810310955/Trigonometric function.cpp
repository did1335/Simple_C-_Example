//
//  Trigonometric function.cpp
//  201810310955
//
//  Created by mac on 2018/10/31.
//  Copyright © 2018年 mac. All rights reserved.
//

#include "Trigonometric function.hpp"
double sind(double deg)
{
    double theta,ans;
    theta=deg*M_PI/180.0;
    ans=sin(theta);
    return ans;
}

double cosd(double deg)
{
    double theta,ans;
    theta=deg*M_PI/180.0;
    ans=cos(theta);
    return ans;
}

double tand(double deg)
{
    double theta,ans;
    theta=deg*M_PI/180.0;
    ans=tan(theta);
    return ans;
}

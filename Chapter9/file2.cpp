# include<iostream>
# include"coordin.h"
# include<cmath>
using namespace std;

polar rect_to_polar(rect xypos)
{
    polar result;
    result.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    result.angle = atan2(xypos.y, xypos.x);
    return result;
}

rect polar_to_rect(polar ppos)
{
    rect result;
    result.x = ppos.distance * cos(ppos.angle);
    result.y = ppos.distance * sin(ppos.angle);
    return result;
}

void show_polar(polar ppos)
{
    const double Rad_to_deg =  57.3;
    cout << "distance =  " << ppos.distance;
    cout << " angle = " << ppos.angle*Rad_to_deg;
    cout << "degrees\n";
    print();
}


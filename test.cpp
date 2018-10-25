#include <iostream>
using namespace std;

int main()
{
    int side_1,side_2,side_3;

    cout<<"Input 3 sides:\n";
    cin>>side_1>>side_2>>side_3;

    if(side_1==side_2==side_3){
        cout<<"Triangle is equilateral";
    }else if(side_1==side_2 || side_1==side_3 || side_2==side_3){
        cout<<"Triangle is isoscles";
    }else{
        cout<<"Your triangle is scalene!!😂 😂 😂";
    }

    return 0;
}
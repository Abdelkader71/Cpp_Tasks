#include <iostream>
#include <cmath>  // allow me to use pow fuction & fmax to get the max. number from the three numbers

bool rightangletriangle(float side1 , float side2 , float side3);

int main()
{
    float x , y , z ;
    bool funccall ;
    std::cout<<"Enter the three sides of triangle respictively: ";
    std::cin>>x>>y>>z;
    funccall = rightangletriangle(x , y , z);
    if(funccall)
    {
        std::cout<<"This Triangle is a right angle triangle"<<std::endl;
    }
    else
    {
        std::cout<<"This Triangle isnot a right angle triangle"<<std::endl;
    }
}

bool rightangletriangle(float side1 , float side2 , float side3)
{
    float hyp , sumofsides = 0 ;
    bool right;
    //To be sure that three sides are not equal
    if(side1 == side2 == side3)
    {
        right = 0;
    }
    else
    {
    //Get the maximum to be the hypotenuse
    hyp = fmax(fmax(side1 , side2) , side3);
    // sum of square of other 2 sides to comapre then to square of hypotenuse
    if(hyp == side1)
    {
        sumofsides = pow(side2 , 2) + pow(side3 , 2);
    }
    else if(hyp == side2)
    {
        sumofsides = pow(side1 , 2) + pow(side3 , 2);
    }
    else
    {
        sumofsides = pow(side1 , 2) + pow(side2, 2);
    }
    //compare sumofsides to square of hyp. if equal is a right angle triangle  
    if(sumofsides == pow(hyp , 2))
    {
        right = 1;
    }
    else
    {
        right =  0;
    }
    }
    return right;
}
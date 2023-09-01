#include <iostream>
#include <cmath>

int sumofdigits (unsigned int number) ;

int main ()
{
    unsigned int usernum ;
    int functionreturn ;
    std::cout<<"Enter an integar number: " ;
    std::cin>>usernum ; 
    functionreturn = sumofdigits (usernum) ;
    if (functionreturn == -1)
    {
        std::cout<<"Enter a correct number , Try again"<<std::endl ;
    }
    else
    {
        std::cout<<"The Sum of digits of your number is: "<<functionreturn<<std::endl ;
    }  
}

int sumofdigits (unsigned int number)
{
    int sum = 0  , check;
    check = (sizeof(int) * 8) ;
    if (number < pow(2 , check))
    {
    while(number != 0)
    {
        sum+= (number % 10) ;
        number/=10 ;
    }
    }

    else
    {
        sum = -1;
    }

    return sum ;

}
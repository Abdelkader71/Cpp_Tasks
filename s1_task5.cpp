#include <iostream>

int main ()
{
    int max ;
    // to generates a multiplication table from 1 to this value
    std::cout<<"Enter The max. value: " ;
    std::cin>>max ;

    for (int i =1 ; i<= max ; i++)
    {
        for (int j = 1 ; j<=max ; j++)
        {
            std::cout<<i<<"x"<<j<<"="<<i*j<<"\t" ;
        }
        std::cout<<std::endl ;
    }
}
#include <iostream>
#include <bitset>


int main()
{
    int number , dec ;
    std::cout<<"Enter a decimal number: " ;
    std::cin>>number ;
    std::bitset<8>binary(number) ;
    std::cout<<"The Binary number is: "<<binary<<std::endl ;
    std::bitset<8>userbinary ;
    std::cout<<"Enter a binary number: " ;
    std::cin>>userbinary ;
    dec = userbinary.to_ulong() ;
    std::cout<<"The decimal number is: "<<dec<<std::endl ;
}

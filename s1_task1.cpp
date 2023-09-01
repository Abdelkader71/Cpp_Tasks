#include<iostream>

int main()
{
    
    std::cout << "ASCII Code Table:" <<std::endl;
    std::cout << "+------+-------+" <<std::endl;
    std::cout << "| Char | ASCII |" <<std::endl;
    std::cout << "+------+-------+" <<std::endl;

    for(int i = 0 ; i<=127 ;i++)
    {
        char ascii = i;
        std::cout << "|  ";
        std::cout << ""<<ascii;
        std::cout << "   |";
        std::cout << "  "<<i;
        std::cout << "   |"<<std::endl;
    }
    
    std::cout << "+------+-------+" <<std::endl;
    
    

    


}
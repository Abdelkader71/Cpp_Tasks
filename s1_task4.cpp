#include <iostream>

bool vowelletter(char letter) ;

int main ()
{
    char Letter ;
    bool funcreturn ;

    std::cout<<"Enter a letter: " ;
    std::cin>>Letter ;

    funcreturn = vowelletter(Letter) ;

    if(funcreturn)
    {
        std::cout<<"Your Letter is a Vowel letter"<<std::endl ;
    }
    else
    {
        std::cout<<"Your Letter isnot a Vowel letter"<<std::endl ;
    }
}


bool vowelletter(char letter)
{
    bool vowlescheck ;
    // char vowels[11] = {'a' , 'i' , 'o' , 'u' , 'e' , 'A' , 'I' , 'O' , 'U' , 'E' , '\0'} ;
    // int i = 0 ;
    // while(vowels[i] != '\0')
    // {
    //     if(letter == vowels[i])
    //     {
    //         break ;
    //     }
    //     i++ ;
    // }
    // if(i == 10)
    // {
    //     vowlescheck = 0 ;
    // }
    // else
    // {
    //     vowlescheck = 1 ;
    // }
    // return vowlescheck ;

    /********************* Another Solution ***************************/
    letter = tolower(letter) ;
    if('letter' >= 97 && 'letter' <=122)
    {
        vowlescheck = 0 ;
    }

    if(letter == 'a' || letter == 'u' || letter == 'i' || letter == 'o' || letter == 'e')
    {
        vowlescheck = 1 ;
    }
    else
    {
         vowlescheck = 0 ;
    }
    return  vowlescheck ;


}
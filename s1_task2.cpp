#include<iostream>

int max (int no1 , int no2 , int no3);

int main()
{
    int x , y , z ;
    std::cout<<"Enter The First Number: ";
    std::cin>>x;
    std::cout<<"Enter The Second Number: ";
    std::cin>>y;
    std::cout<<"Enter The Third Number: ";
    std::cin>>z;
    /* *****************First Solution ********************/
    // if(x > y)
    // {
    //     if(x>z)
    //     {
    //         std::cout<<"The First number("<< x;
    //         std::cout<<") is the biggest"<<std::endl;
    //     }
    //     else
    //     {
    //         std::cout<<"The Third number("<< z;
    //         std::cout<<") is the biggest"<<std::endl;
    //     }
    // }
    
    // else if(y>x)
    // {
    //     if(y>z)
    //     {
    //         std::cout<<"The Second number("<< y;
    //         std::cout<<") is the biggest"<<std::endl;
    //     }
    //     else
    //     {
    //         std::cout<<"The Third number("<< z;
    //         std::cout<<") is the biggest"<<std::endl;
    //     }
    // }
    /* *****************Second Solution ********************/
    int maximum ;
    maximum = max (x , y , z) ;
    if (maximum == x)
    {
        std::cout<<"The first number: "<<maximum<<" is the maximum number"<<std::endl ; 
    }
    else if(maximum == y)
    {
        std::cout<<"The first number: "<<maximum<<" is the maximum number"<<std::endl ;
    }
    else
    {
        std::cout<<"The third number: "<<maximum<<" is the maximum number"<<std::endl ;
    }
}

int max (int no1 , int no2 , int no3)
{
    int maxno = no1 ;
    
    if(no2 > maxno)
    {
        maxno = no2 ;
    }
    if(no3 > maxno)
    {
        maxno = no3 ;
    }
    return maxno ;
}
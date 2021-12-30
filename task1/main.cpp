#include <iostream>
#include "main.h"
#include "util.h"

/*This is a multyline comment
in the beginning of the code*/

int main(int argc, char** argv)
{
    int age;
    std::cout << "Enter your age: " <<  std::endl;
    std::cin >> age;

    //This is one line comment

    if(age > 18)
    {
        std::cout << "You are legal to buy alcohol" << sum(age, 18) << std::endl; 
    }
    else
    {
        for(int i = 0; i < age; i++)
        {
            std::cout << "Bye, you are not legal to buy alcohol" <<  std::endl; 
        }
        std::cout << "Come in " << lefttowait(age) << " years." << std::endl;
    }
    return 0;
}

int lefttowait(int age)
{
    int res = 18 - age;
    return res;
}
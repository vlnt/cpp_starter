#include <string>
#include <iostream>

int main(int argc, char** argv)
{
    std::string str = "Hello World! \n";
    std::string str2 = "How are you?";
    std::string nstr = std::to_string(30);
    std::cout << ( str + str2 ) << std::endl;
    std::cout << nstr << std::endl;
    return 0;
}
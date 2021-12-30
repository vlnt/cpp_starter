#include <iostream>

int sum(int x, int y)
{
    return x+y;
}

int main(int argc, char** argv)
{
    int result = sum(5, 5);
    std::cout << "The result of 5 + 5 is: " << result << std::endl;
    return 0;
}
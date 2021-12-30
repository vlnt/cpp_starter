#include <vector>
#include <iostream>

int main(int argc, char** argv)
{
    std::vector<int> vec;
    vec.push_back(55);
    vec.push_back(45);
    vec.push_back(94);
    vec.push_back(80);
    vec.push_back(23);
    vec.push_back(62);
    vec.push_back(67);
    vec.pop_back();

    int a = vec.back();
    std::cout << "The last element is: " << a << std::endl;

    for(int i = 0; i < vec.size(); i++)
    {
         std::cout << vec.at(i) <<std::endl;

    }
}

   
#include <iostream>
using namespace std;

int main (int argc, char** argv)
{
    int array[10];
    for(int i = 0; i < 10; i += 1)
    {
        array[i] = i;
    }

    for(int i = 0; i < 10; i += 1)
    {
        cout << array[i] <<  endl;
    }
    return 0;

}
#include <iostream>

struct abc
{
    int a;
    int b;
};

void test(int& var)
{
    std::cout << "var value = " << var << std::endl;
}

int reftest =888;
int& return_ref()
{
    return reftest;
}


int main(int argc, char** argv)
{
    int a = 50;
    int b = 60;
    int* ptr = &a;
    *ptr = 25;
    int* ptr0 = NULL;
    int**ptr2 = &ptr;

    std::cout << " PTR =  " << *ptr << " memory address of a = " << &a << '\n' << "Address of b:" << &b << std::endl;
    std::cout << "Size of a: " << sizeof(a) << std::endl;
    std::cout << "&b: " << *(ptr+1) << std::endl;
    std::cout << "Zero pointer: " << ptr0 << std::endl;
    std::cout << "ptr2: " << **ptr2 << std::endl;

    struct abc st;
    st.a = 30;
    st.b = 20;

    struct abc* pointer = &st;

    pointer->a = 192;
    pointer->b = 168;

    std::cout << "st.a: " << st.a << std::endl;
    std::cout << "st.b: " << st.b << std::endl;

    struct abc* hptr = new struct abc;
    hptr->a = 139;
    hptr->b = 47;
    delete hptr;
    std::cout << "hptr: " << hptr << std::endl;// the address in the heap
    std::cout << "prog-heap: " << (&a - &hptr->a) << std::endl;

    test(a);

    return_ref() = 777;
    std::cout << "returning refrence " << reftest << std::endl;
    
}
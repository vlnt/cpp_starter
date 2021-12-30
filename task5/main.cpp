#include <fstream>
#include <iostream>

int main(int argc, char** argv)
{
    // std::ofstream wfile("test.txt");
    // if(wfile.is_open())
    // {
    //     std::cout << "File is open for writing" << std::endl;
    // }
    // else
    //  {
    //      std::cout << "Problem openinig file" << std::endl;
    //      return 1;
    //  }

    //  wfile << "If you are someone with no previous programming experience \n or someone with programming experience and would love \n to learn C++ you have come to the right place. " << std::endl;
    std::streampos begin, end;
    std::ifstream file("test.txt", std::ios::binary);
      std::ifstream rfile("test.txt");

    if(rfile.is_open())
    {
        std::cout << "File is open for reading" << std::endl;
    }
    else
     {
         std::cout << "Problem openinig file" << std::endl;
         return 1;
     }

     begin = file.tellg();
     file.seekg(0, std::ios::end);
     end = file.tellg();
      std::cout << " File size is:" << (end - begin ) << std::endl;

    std::string msg;
    std::cout << "The content of file is:\n" << std::endl;
    while( getline(rfile, msg) )
    {
        std::cout << msg << std::endl;
    }
         
         
}

   
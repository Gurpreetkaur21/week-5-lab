#include<iostream>
#include<math.h>
#include<fstream>

int main()
{
    int g,h;
    std::cout<<"Enter the value of g";
    std::cin>>g;
    std::cout<<"Enter the value of h";
    std::cin>>h;
    auto t=sqrt(pow(g,2)+pow(h,2));
    std::cout<<"the answer is "<<t;
   std:: ofstream myfile;
    myfile.open ("example.txt");
    myfile << "Writing this to a file.\n" << t;
    myfile.close();
    return 0;
}
#include <iostream>
#include <stdlib.h>
#include<ctime>

//delay function
void delay(int secs) {
  for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}

int main()
{
    int sec = 1;
    std::cout << "\n";
    std::cout << "\t------------------------------------------------------------" << "\n";
    std::cout << "\t-------------Program to render a shape spinning-------------" << "\n";
    std::cout << "\t------------------------------------------------------------" << std::endl;
    delay(sec);
    system("cls");

    std::cout <<"|   |  |"<<"\n";
    std::cout <<"|===|  |"<<"\n";
    std::cout <<"|j  |  |"<<"\n";
    std::cout <<"| g |  |"<<"\n";
    std::cout <<"|  s| /"<<"\n";
    std::cout <<"|===|/"<<"\n";
    std::cout <<"'---'"<<"\n";
    delay(sec);
}
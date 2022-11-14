#include <iostream>
#include <stdlib.h>
#include<ctime>

void delay(int secs) {
  for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}

int main()
{
    int sec = 2;
    std::cout <<",         ," <<"\n";
    std::cout <<"|\       /|"<<"\n";
    std::cout <<"| \  V  / |"<<"\n";
    std::cout <<"|  |~~~|  |"<<"\n";
    std::cout <<"|  |===|  |"<<"\n";
    std::cout <<"|  |j  |  |"<<"\n";
    std::cout <<"|  | g |  |"<<"\n";
    std::cout <<" \ |  s| / "<<"\n";
    std::cout <<"  \|===|/  "<<"\n";
    std::cout <<"   '---'   "<<"\n";
    delay(sec);
    system("cls");

    std::cout <<"  ,    ," <<"\n";
    std::cout <<"  /// /|"<<"\n";
    std::cout <<" ////  |"<<"\n";
    std::cout <<"|   |  |"<<"\n";
    std::cout <<"|===|  |"<<"\n";
    std::cout <<"|j  |  |"<<"\n";
    std::cout <<"| g |  |"<<"\n";
    std::cout <<"|  s| /"<<"\n";
    std::cout <<"|===|/"<<"\n";
    std::cout <<"'---'"<<"\n";
    delay(sec);

}
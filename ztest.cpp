#include <iostream>
#include <chrono>
#include <thread>

int main()
{
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

    std::this_thread::sleep_for(std::chrono::milliseconds(2000) );
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
    std::this_thread::sleep_for(std::chrono::milliseconds(2000) );
}
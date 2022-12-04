#include <iostream>
#include <stdlib.h>
#include <ctime>

//delay function
void delay(int secs) {
  for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}

//clear screen no matter the system
void clear_screen() {
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}


int main()
{
    int delay_time = 1;
    char shape_select;
    std::cout << "\n";
    std::cout << "\t------------------------------------------------------------" << "\n";
    std::cout << "\t------------ Program to render a spinning shape ------------" << "\n";
    std::cout << "\t------------------------------------------------------------" << std::endl;
    delay(delay_time);

    do {
        clear_screen();
        std::cout << "\t------------------------------------------------------------" << "\n";
        std::cout << "\t--------------------- Select the shape ---------------------" << "\n";
        std::cout << "\t------------------------------------------------------------" << "\n";
        std::cout << "\n\n\tC --> Circle" << "\n";
        std::cout << "\tS --> Square" << "\n";

        std::cin >> shape_select;

    } while (shape_select != 'C' && shape_select != 'S' && shape_select != 'c' && shape_select != 's');

    
    
    return 0;
}

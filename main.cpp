#include <iostream>
#include<unistd.h>
int main(){
    for (int i = 0; i <= 100; i+=10)
    {
        std::cout<<"Hackind the Pentagon "<<i<<"%"<<std::endl;
        sleep(1);
    }
    std::cout<<"Hack completed"<<std::endl;

     return 0;
}
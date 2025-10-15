#include "../ezlib.hh"
#include <iostream>

int main(){
    char arr[] = "Hello world 2025!";
    char emp[] = "";
    ez::string_t str = arr;
    std::cout << "String is : "<<str.value("jprintf")<<"\nLength is : "<<str.length<<"\n";
    std::cout << "String is : "<<str.rdvalue()<<"\nLength is : "<<str.length<<"\n";

    char yt[4096]; // 4KB of Memory Stack
    ez::helper::strwrite(str.rdvalue(), yt);
    std::cout << "YT STACK is : "<<yt<<"\n";
}
/* this program will print a paramid base on user input height */

#include <iostream>

int main(){
    int height = 0;
    std::cin >> height;
    for(int i = 0; i < height; i++){
        for(int j = height - i; j < i; j++) std:: cout << "*";
        std::cout <<"\n";
    }
}

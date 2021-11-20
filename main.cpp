#include<adder.h>
#include<substract.h>
#include<iostream>

int main(){
    int sum = basic_operations::Sum(5,6);
    int difference = basic_operations::substract(5,6);
    std::cout << "The sum is: " <<sum << std::endl;
    std::cout << "The difference is: " <<difference << std::endl;
    return 0;
}
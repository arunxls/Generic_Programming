/*
Arun Krishnakumar Rajagoapalan 623007516
*/

#include <cassert>
#include <string>
#include <iostream>

#include "p3.hpp"

int main() {

    //Try to instantiate the function template with int
    int int1 = 0;
    int int2 = 10;
    // sum_all<int>(&int1, &int2);

    //Try to instantiate the function template with string
    std::string string1 = "a";
    std::string string2 = "b";
    // sum_all<std::string>(&string1, &string2);

    //Try to instantiate the function template with void
    void* void1 = &int1;
    void* void2 = &int2;
    // sum_all<void>(void1, void2);

    //Try to instantiate the function template with int pointer
    int* p1 = &int1;
    int* p2 = &int2;
    // sum_all<int*>(&p1, &p2);
}
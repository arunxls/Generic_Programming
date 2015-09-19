/*
Arun Krishnakumar Rajagoapalan 623007516
*/

#include<stdio.h>
#include<cassert>
#include<iostream>
#include "p2.hpp"

template <typename T1, typename T2, typename T3>
bool triple<T1, T2, T3>::is_zero() {
    return (this->first == 0) && (this->second == 0) && (this->third == 0);
}

int main() {
    triple<int, int, char> b(1, 2, 'a');
    assert(!b.is_zero());

    triple<int, int, int> d(0,0,0);
    assert(d.is_zero());
    d++;
    assert(!d.is_zero());

}
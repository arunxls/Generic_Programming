/*
Arun Krishnakumar Rajagoapalan 623007516
*/

template <class T>
inline T sum_all(T* first, T* last) {
T sum;
for (sum = 0; first != last; ++first)
    sum += *first;
    return sum;
}
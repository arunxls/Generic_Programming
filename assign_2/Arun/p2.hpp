#include <iterator>
#include <algorithm>

template <typename BidirectionalIterator>
void func1(BidirectionalIterator begin, BidirectionalIterator end) {
    while (std::next_permutation(begin, end));
}

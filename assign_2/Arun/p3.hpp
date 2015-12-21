#include <iterator>
#include <algorithm>
#include <iostream>
#include <csignal>
#include <functional>

template <typename BidirectionalIterator, typename UnaryPredicate>
void dragdrop(BidirectionalIterator f, BidirectionalIterator l, BidirectionalIterator p, UnaryPredicate s)
{
    if(std::distance(f, l) < std::distance(f, p)) {
        std::abort();
    }

    //Get the lambda arg type
    typedef typename std::iterator_traits<BidirectionalIterator>::value_type unary_type;
    std::function<bool(unary_type)> fn = s; // unary predicate

    //Call on first half with inverted function
    std::stable_partition(f, p, std::not1(fn));

    //Call on second half with original function
    std::stable_partition(p+1, l, fn);

    return;

    // Alternate implementation

    // //Determine location at which to rotate finally after moving
    // //all elements
    // size_t count = 0;
    // auto tmp_p = p;
    // while(tmp_p != l) {
    //     if(!s(*tmp_p)) count++;
    //     tmp_p++;
    // }

    // size_t swap_distance = std::distance(f, l);
    // for(size_t i = 0; i < swap_distance; ++i)
    // {
    //     if(s(*f))
    //     {
    //         std::rotate(f, f+1, l);
    //     } else {
    //         ++f;
    //     }
    // }
    // std::rotate(f-count, f, l);
}


#include <iterator>
#include <algorithm>
#include <iostream>

template <typename Inputterator>
void print_category(Inputterator x, std::input_iterator_tag) {
    std::cout << "Input Iterator\n";
}

template <typename OutputIterator>
void print_category(OutputIterator x, std::output_iterator_tag) {
    std::cout << "Output Iterator\n";
}

template <typename RandomIterator>
void print_category(RandomIterator x, std::random_access_iterator_tag) {
    std::cout << "Random Iterator\n";
}

template <typename BidirectionalIterator>
void print_category(BidirectionalIterator x, std::bidirectional_iterator_tag) {
    std::cout << "Bidirectional Iterator\n";
}

template <typename ForwardIterator>
void print_category(ForwardIterator x, std::forward_iterator_tag) {
    std::cout << "Forward Iterator\n";
}

template <class Iterator>
void print_category(Iterator x) {
    print_category(x, typename std::iterator_traits<Iterator>::iterator_category());
}


/*
Arun Krishnakumar Rajagoapalan 623007516
*/

template <class T1, class T2, class T3>
class triple {
public:
    typedef T1 first_type;
    typedef T2 second_type;
    typedef T3 third_type;

    first_type first;
    second_type second;
    third_type third;

    // Default constructor
    triple() : first(T1()), second(T2()), third(T3()) {}

    // Constructor with three parameters
    triple(const T1& x, const T2& y, const T3& z): first(x), second(y), third(z) {}

    // Copy constructor
    triple(const triple& other) {
        this->first  = other.first;
        this->second = other.second;
        this->third  = other.third;
    }

    //Overloading the = operator
    triple& operator=(const triple& other){
        this->first  = other.first;
        this->second = other.second;
        this->third  = other.third;

        return *this;
    }

    // Operating the equality operator
    bool operator==(const triple& other){
        return
        (this->first  == other.first ) &&
        (this->second == other.second) &&
        (this->third  == other.third );
    }

    // Overloading the != operator
    bool operator!=(const triple& other){
        return
        (this->first  != other.first ) &&
        (this->second != other.second) &&
        (this->third  != other.third );
    }

    // Overloading the pre-increment operator
    triple& operator++() {
        this->first++;
        this->second++;
        this->third++;

        return *this;
    }

    // Overloading the post-increment operator
    // The same as the pre-increment operator
    triple& operator++(int) {
        this->operator++();
        return *this;
    }
};
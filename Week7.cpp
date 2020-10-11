//Exceptions and Templates

//Exceptions in C++ is the same as Java
//cant forget or ignore an exception, and if you do, the program will terminate
//any kind of error can be reported using exceptions
//some errors just cannot be catched

//Exceptions must be reserved for conditions that cannot be resolved by member functions
//DO NOT use exceptions to manage your flow

//example
try {
    std::vector<int> v;
    v.at(4) = 0;
} catch (const out_of_range& e) { //out of range exception is vector specific
    //e.what() will get the exception message
    std::cerr << "oops - index out of range:" << e.what() << endl;
} catch (exception& e) { //all other exceptions
    std::cerr << "oops - some exception: " << e.what() << endl;
}

//defining out own exceptions
class MyException: public exception {
public:
    MyException(string m = "My Exception!") :
    msg(m) {}

    ~MyException() throw { }
}

//Templates
//define types abstractly, does vector know its holding ints?
std::vector<int> v; //doees vector, the class, knows its holding an int[]?
//allows us to write generic code that will hold any data type

//example
template <class T> class Container {
public:
    Container(T value) {
        this->value = value
    }

    virtual ~Container() {};

    //return type is of T type, whatever this class was given
    T getValue() {
        return value;
    }

private:
    T value;
};

Container<int> c(10);

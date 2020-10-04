//Encapsulation

//Exposing data
//Data should be private because we dont want people changing variables with us knowing
//we can use setters and getters
setX(int x) { this.x = x; }
getX() { return x; }


//provides protection of the behaivuor of the class

//functions can be public or private
//public for interface
//private for functions used internally in the class

//Why go private?
//we can change implementation after release
//we dont expose private types used to users
//can change mutability, or knowing that only we can change it

//3 levels of access
//public, accessible to all users
//protected, Users dont get to see, but derived classes can see
//private, only the class can see

//Mechanisms
//Object Oriented Programming
//  Inheritance, polymorphism, encapsulation
//  Inheritance
struct Circle : Shape{...};     //Circle extends shape, gets everything what a shape contains, will add its own functions

//polymorphism
virtual void draw_lines() const;//similar to the abstract keyword in java, for extending classes to define
//anything that extends off this class MUST implement these methods

//encapsulation
protected Shape();  //only accessible by its self, and deriving classes below

//Benifits of Inheritance
//Adding code without touching old is the "Holy Grail" of OOP
//Simplifies implementation, change once, affects all classes. another "Holy Grail"

//on the topic of virtual functions
struct Engine { //interface
    //no data
    //(usually) no constructor
    virtual double increase(int i) =0;//must be defined by any implementing class
    //=0 keyword makes the implementer to implement the function

}

//Copying
Point a(0, 0);
Point b = a;
//C++ compiler will copy the contents of a and put it into b
//works best, since Point is a small class

//Copying may not produce the best results, so we can implement a copy function

class vector {
    int sz;
    double* elem; //true C pointer, points to something in memory
public:
    vector(const vector&)  ;//copy constructor, defines copy
};

//Shallow copy, copys only the pointer so that the 2 pointers point to the same thing
//Deep copy, copy the pointer and its contents so that the 2 pointers point to 2 distinct objects
//Will copy everything down to the end

//preventing copying
Class Shape {
    Shape(const Shape&) = delete;   //don't "copy construct"
    Shape& operator=(const Shape&) = delete;    //dont "copy assignment"
}

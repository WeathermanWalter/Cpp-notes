//the const keyword
const <type> name;

//const keyword means contents may not be modified
const int x = 5;

//const function
<return value> <class>::<member-function>(<args>) const
//const is used to ensure this function cannot change the object
//it cannot change the state in which the member function it belongs to
double hash::get_hash(unsigned char * input) const

//const function
const <return value> <class>::<member-function>(<args>)
//The <return object> cannot be changed once its returned
const std::vector get_input();

//const argument
<return value> <class>::<member-function>(const <type> name)
//The arguments cannot be modified by the function
int string_length(const char * string)

/*--------------------------------------------*/
class Date {
public:
    int day() const { return d; } //const member: can't modify
    void add_day(int n); //non-constant member: can modify
}
Date d(2000, Date::jan, 20);
const Date cd(2001, Date::feb, 15);
std::cout << cd.day << std::endl //ok
d.add_day(1); //ok
cd.add_day(1); //error, cd is constant

//Helper Functions, convenience function, etc
//a function that is common throughout the object

//Friend function
//A function that is not a member of the class
//can access all members through the friend declaration
friend Vector operator*(const Matrix&, const Vector%);// grant access

//this
//identicle to Java, identifies in its member, or object in java
this.x = x;
//const functions cant use this

//operator overloading
//define your own operators
enum Month {
    jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};
Month operator++ (Month& m) {
    m = (m==dec) ? jan : Month(m+1);
}
Month m = nov;
m++; //becomes dec
m++; //becomes jan

//can only use existing operators
//i.e. + - * / % == != [] () etc.

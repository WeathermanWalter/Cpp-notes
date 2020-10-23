//File IO and Streams

//Output Stream
//Takes input from wherever, when stream is closed, the output stream will 'flush' to its output
//Input Stream
//Get data from somewhere, outputs data when we want

//Stream Model
//its type safe, ints will be ints, chars will be chars
//typically stored as a text

//Files
//Disk <--I/O Stream--> Main Memory

//to read a file, we need
//its name
//the operating mode "read"

//to write a file, we need
//its name
//input

//how to open

#include <iostream>
#include <fstream>

std::cout << "Please enter a file name: ";
string name;
std::cin >> name;
//ifstream is an "input stream from a file"
//defining an ifstream with a name string
//opens the file of that name for reading
ifstream ist(name);
if (!ist) error("can't open input file ", name);

//error handling

//sources of errors
//human mistakes
//files that fail to match reality
//specs that fail to match reality
//programmer errors

//iostream reduces all errors to one of foue states
good() //operation succeeded
eof() //we hit the "End of File"
fail() //something unexpected happened
bad() //something unexpected and seriouse happened


//examples
1 2 3 4 4 5 * //state is fail
1 2 3 4 5.6 //state is fail, expected int, got float

//Type vs. Line

//Read a String
string name;
cin >> name; //input: Dennis Ritchie
cout << name << '\n'; //outputs: Dennis
//' ' is a delimitting character, so name gets assigned uo until we hit the space

//Read a Line
string name;
getline(cin, name); //input: Dennis Ritchie
cout << name << '\n'; //output: Dennis Ritchie
//or
istringstream ss(name);
ss>>first_name;
ss>>second_name;

//Line-Oriented Input
//prefer >> to getline()
//  i.e. avoid line-orineted input when you can
//People often use getline() because they see no alternative
//  can get messy
//  When trying to use getline() you often end up using >> to parse the line from a stringstream
//  using get() to read individual characters

#include <iostream>  
#include <sstream> // use stringstream class  
using namespace std;  
  
int main()  
{  
    string str1 = "143"; // declare a string  
      
    int intdata; // declare integer variable  
      
    /* use stringstream class to declare a stream object to insert a string and then fetch as integer type data. */  
       
     stringstream obj;  
     obj << str1; // insert data into obj  
     obj >> intdata; // fetch integer type data  
       
     cout << " The string value is: " << str1 << endl;  
     cout << " The representation of the string to integer type data is: " << intdata << endl;  
     return 0;  
}  

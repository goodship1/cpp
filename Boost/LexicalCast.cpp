#include <boost/lexical_cast.hpp>
#include "./utils.h"
#include<string>
using boost::lexical_cast;

void challenge(){
   int numberOne =260;//int definition
   string strOne =lexical_cast<string>(numberOne);//converts numberOne to str
   cout<<strOne;//prints the StrOne
   cout<<endl;//prints a newline
   strOne = "helloworld"+lexical_cast<string>('A');//converts a char to a str and concantinates together message
   strOne = "hello world"+lexical_cast<string>(34.5);
   cout<<strOne;
   
}

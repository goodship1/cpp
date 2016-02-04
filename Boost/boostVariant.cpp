#include<iostream>
#include <boost/variant.hpp>
#include<string>

using boost::variant;

 void challenge() {
     variant<std::string,int> var;
     var = "hello";
     std::cout<<boost::get<std::string>(var);
     var = 20;
     std::cout<<boost::get<int>(var);
}

struct showVariant : public static_vistor<> {
       void operator() (int I) const {
            std::cout<<I<<std::endl;
        }
        void operator() (std::string g) const {
            std::cout<<g<<std::endl;
        }
};

int main() {
   variant<std::string,int> var;
   var = "hello";
   boost::apply_visitor(showVariant{},var);
   var = 21;
   boost::apply_visitor(showVariant{},var);
}

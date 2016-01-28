#include "./utils.h"


void challenge(){
  // o(1)
  forward_list<int> listOne;
  print(forward_list<int>(listOne));//prints empty list 
  //o(n) linear time
  forward_list<int> listTwo(1,2);//takes one element of two
  print(forward_list<int>(listTwo));//prints 2 
  // o(n) linear time
  forward_list<int>listThree(10);//makes a foward list of size ten
  cout<<listThree.size();//prints the size of 10
  print(forward_list<int>(listThree));//prints 10 values of zero
  listThree.push_front(10);//pushs interger to to front of foward_list o(1)
  print(foward_list<int>(listThree);//o(n)
  for(int i=0; i<10; ++i){
        listFour.push_front(i);
    }//push 0 to 9 to front of list
   listFour.pop_front();//removes 9 from the forward list
   print(forward_list<int>(listFour));
   forward_list<int> listFive;//create a new forward list
   listFive.merge(listFour);//merge list five with list three
   print(forward_list<int>(listFive));
  
}
  

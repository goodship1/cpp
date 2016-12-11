#include<set>
#include<iostream>

void multiSet(){
	//creation of the multiset
	std::multiset<int> mySet;
	//insert some values into the set
	for(int i = 0; i<10; ++i){
		mySet.insert(i);
	}
	std::multiset<int>::iterator it;
	//insert at max efficiency
	it = mySet.insert(11);
	it = mySet.insert(it,12);//max effciency when know where the position of the next element is 
	std::multiset<int>::iterator iter;
	for(iter=mySet.begin(); iter!=mySet.end(); ++iter){
		std::cout<<*iter;
	}
	//finding a value 
	std::multiset<int>::iterator findIter;
	findIter = mySet.find(11);
	//erasing a value
	mySet.erase(findIter);
	//display amended list
	std::multiset<int> :: iterator displayIt;
	for(displayIt = mySet.begin(); displayIt!=mySet.end(); ++displayIt){
		std::cout<<*displayIt<<std::endl;
	}
	
}
	
	
int main(){
	multiSet();
}

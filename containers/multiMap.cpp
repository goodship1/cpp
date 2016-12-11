#include<map>
#include<iostream>

void multi_Map(){
	std::multimap<int,int> myMap;
	//inserting values one by one
	myMap.insert(std::pair<int,int>(1,1));
	myMap.insert(std::pair<int,int>(2,2));
	myMap.insert(std::pair<int,int>(3,3));
	//multimap allows for duplicates
	for(int i = 0; i < 4; ++i){
		myMap.insert(std::pair<int,int>(i,i));
	}
	//displaying elements of map
	std::multimap<int,int>::iterator iter;
	for(iter = myMap.begin(); iter != myMap.end(); ++iter){
		std::cout<<iter->first<<std::endl;
		std::cout<<iter->second<<std::endl;
	}
	//inserting an implement with max effienct
	std::multimap<int,int>::iterator it = myMap.end();
	myMap.insert(iter,std::pair<int,int>(4,4));
	//finding elements
	std::multimap<int,int> :: iterator findIter;
	findIter = myMap.find(4);
	//erasing element with the member 4
	myMap.erase(4);
	//displaying new multimap
	for(iter = myMap.begin(); iter != myMap.end(); ++iter){
		std::cout<<iter->first<<std::endl;
		std::cout<<iter->second<<std::endl;
	}
	
}


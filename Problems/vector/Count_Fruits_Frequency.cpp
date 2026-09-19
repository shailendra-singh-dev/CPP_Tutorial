#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

void set_fruits(std::vector<std::string>& fruits){
    fruits.push_back("apple");
    fruits.push_back("banana");
    fruits.push_back("orange");
    fruits.push_back("apple");
    fruits.push_back("banana");    
}

int get_fruit_frequecy(std::string fruit){
    vector<string> fruits;
    set_fruits(fruits);
    map<string, int> frequency;
    for(const auto& f : fruits){
        frequency[f]++;
    }
    if(frequency.find(fruit) != frequency.end()){
        return frequency[fruit];
    } else {
        return 0;
    }
}

int get_fruit_frequecy_main(const std::string& fruit){
    return get_fruit_frequecy(fruit);
}
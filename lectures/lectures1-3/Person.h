// Person.h
#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>

// A class Person interface
class Person {
public:
    Person(); 				// default constructor
    Person(std::string name, int age);
    Person(Person& person);		// copy constructor
    ~Person();                          // destructor
    std::string getName() const;        // accessor / getter
    int getAge() const; 		// accessor / getter
    void setName(std::string name);   	// mutator / setter
    void setAge(int age);		// mutator / setter
    std::vector<int>* getVector() const;
    
private:
    std::string name;
    int age;
    std::vector<int>* v;
};

#endif
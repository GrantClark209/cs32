#include "F1.h"
#include "F2.h"

int main() {
    CS_32_F2::string x;
    x.someFunction(); // prints "F2.someFunction()"
    
    //using namespace CS_32_F1;
    //someFunction(); //F1.someFunction()
    return 0;
}
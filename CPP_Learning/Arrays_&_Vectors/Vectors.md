## Vectors 
----> Vectors arrays ki tarah hi hotay hain per woh dynamic hotay hain.

## Syntax
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<datatype> name; ----> iski size abhi 0 hai
    vector<int> vec = {1, 2, 3};
    vector<int> vec(size of vector, value at every index);  
    vector<int> vect(3, 0); --> this creates a vector of 3 size and 0 at every index {0, 0, 0}y
    return 0; 
}         

## for each loop
  for(datatype of vector val : name of vector){
    cout << val << endl;
  }
## Examples
    vector<int> vec = {1, 2, 3};
    for(int val : vec){
        cout << val;
    }
    vector<chat> vec = {'A', 'B', 'C'};
    for(char val : vec){
        cout << val;
    }

## Vector Functions

1. Size ----> returns size of vector  syntax vector.size();
2. push_back ---> pushes value to last of the vector
3. pop_back ---> removes value from last index of the vector
4. front ---> returns value at first index
5. back ---> returns value at last index
6. at ---> returns values at specific index syntaz vector.at(index)

# STATIC VS DYNAMIC MEMORY ALLOCATION
## Static Memory: Yeh memory compile time main hi allocate ho jaati hai
Example: int arr[5] ---> yeh compile time main hi array ki memory allocate ho jayegi

## Dynamic Memory: Yeh memory run-time pe allocate hoti hai
Example: vector<int> vect; initaly iski memory allocate nh hogi jese ham code run hoga phir iski memory allocate hogi

# static allocation STACK memory main allocate hoti hai or dynamic allocation HEAP memory main allocate hoti hai

## Vector memory main stor kese hota hai
Jab ham vector ko initalize krte hain toh agar initialy uski size 0 hai or agar ham usme koi or value push krte hain toh 1 size ka ek vector ban jayega or agar ham phir se ek or value push krtay hain toh memory main phele vector ki double size ka dusra vector create hoga jisme woh value store hogi or purana wala vector delete ho jayega.

## Example: 
vector<int> vec;
initialy iski size 0 hai or isme koi bhi value stored nh hai

vec.push_back(0); ---> ab memory main 1 size ka vector create hoga jisme 0 stored hoga

vect.push_back(1); ---> jo phele wala vector tha uski 2X size ka new vector memory main create hoga jisme {0, 1} hogi or purana wala delete ho jayega.

vect.push_back(2); ---> jo phele wala vector tha uski 2X size ka new vector memory main create hoga jisme {0, 1, 2, } hogi or purana wala delete ho jayega.

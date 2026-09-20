#include <iostream>
using namespace std;
int main(){
    int marks[] = {99, 88, 77, 66, 77};
    int size = sizeof(marks)/sizeof(marks[0]);
    for(int i = 0; i < size; i++){
        cout << marks[i];
    }
}

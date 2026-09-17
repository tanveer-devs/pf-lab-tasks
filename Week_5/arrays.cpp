// Arrays: They are sed to store same type of data
// Arrays are static not dynamic
// we can access vals of arrays by sing index arr[index]

// arrays are declared by: 

// dataType arr[] = {};
#include <iostream>
using namespace std;
int main(){
    // int size;
    // cout << "Enter size: ";
    // cin >> size;
    // string arr[size] = {};
    // for(int i = 0; i < size; i++){
    //     string val;
    //       cout << "Enter val at " << i << "th index ";
    //     cin >> val;
    //     arr[i] = val;
    // }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << "j = " << j << endl;
            for (int k = 0; k < 10; k++){
                cout << k;
            }
            cout << endl;    
        }
    }
    return 0;
}



//nested loops

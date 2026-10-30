#include <iostream>
using namespace std;
int main(){
    int size;
    // cout << "Enter size of Array: ";
    // cin >> size;
    int arr[5] = {9, 70, 50, 44, 100};
    int max = arr[0], min = arr[0];
    // for(int i = 0; i < size; i++){
    //     cout << "Enter " << i << " element: ";
    //     cin >> arr[i];
    // }
    for(int i = 0; i < 5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout << max << endl;
    cout << min;
    return 0;
}
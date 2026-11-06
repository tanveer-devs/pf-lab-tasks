#include <iostream>
using namespace std;
int main(){
    int arr[5] = {-1, -70, -50, -12, -10};
    int max = 0, min = arr[0];
    for(int i = arr[0]; i < 5; i++){
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
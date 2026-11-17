#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec = {1, 2, 3};
    // cout << vec[0] << endl;
    vec.push_back(11);
    vec.push_back(12);
    vec.push_back(13);
    vec.push_back(14);
    vec.push_back(15);
    vec.pop_back();
    for(int val : vec){
        cout << val << " ";
    }
    cout << vec.at(2);
    return 0;
}
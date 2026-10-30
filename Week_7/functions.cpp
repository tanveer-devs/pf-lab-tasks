#include <iostream>
using namespace std;
void sum(double a, double b){
    cout << a+b << endl;
}
int sum(int a, int b){
    return a+b;
}
int main(){
    sum(2.3,3.3);
    int val = sum(2,3);
    cout << val;
    return 0;
}
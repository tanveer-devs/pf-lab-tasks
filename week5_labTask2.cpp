#include <iostream>
using namespace std;
int main(){
    int userChoice, length; 
    cout << "Enter a no: ";
    cin >> userChoice;
    cout << "Enter length: ";
    cin >> length;
    for (int i = 1; i <= length; i++){
        cout << userChoice << " * " << i << " = " << userChoice*i << endl;
    }
}


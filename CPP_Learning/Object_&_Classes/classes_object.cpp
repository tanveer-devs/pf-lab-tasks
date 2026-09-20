#include <iostream>
using namespace std;
// Task 1:
/*
Create a Student class with private:
   - name
   - rollNo
 Create setters and getters for both.
In main():
Create one object
Set its values
Display them using getters.
*/

// class Student{
//     private:
//         string name;
//         string rollNo;
//     public:
//         void setData(string n, string r){
//             name = n;
//             rollNo = r;
//         }
//         void getData(){
//             cout << "Name: " << name << "\n";
//             cout << "Roll no: " << rollNo << "\n";
//         }
// };



// Create a BankAccount class with private:

// accountNumber
// balance

// Create:

// setAccountNumber()
// getAccountNumber()
// setBalance()
// getBalance()

// Create two objects and give them different values.
// class BankAccount{
//     private:
//         double balance;
//         int accountNumber;
//     public:
//     void setAccountNumber(int a){
//         accountNumber = a;
//     }
//     void getAccountNumber(){
//         cout << "Account number: " << accountNumber << "\n"; 
//     }
//     void setBalance(int val){
//         balance = val;
//     }
//     void getBalance(){
//         cout << "Total balance: $" << balance << "\n"; 
//     }
// };

// 5. Age Validation

// Create a Person class with private:

// name
// age

// Create setAge() but don't allow an invalid age.

// For example:

// age < 0 → reject
// age >= 0 → accept

// Then use getAge() to display the final age.
class Student{
    private:
        string name;
        double gpa;
    public:
        void setGpa(double val){
            if(val >= 0 && val <= 4){
                gpa = val;
            } else{
                cout << "Gpa should be between 0 and 4 gpa will be assigned with val of 0!";
                gpa= 0;
            }
        }
        void setName(string n){
            name = n;
        }
     double getGpa(){
        return gpa;
     }
     string getName(){
        return name;
     }

};
int main(){
    Student p1, p2;
    p1.setGpa(3.94);
    p1.setName("Alveena");
    cout << p1.getGpa() << endl;
    cout << p1.getName() << endl;
    p2.setGpa(3.1);
    p2.setName("Tanveer");
    cout << p2.getGpa() << endl;
    cout << p2.getName();
}


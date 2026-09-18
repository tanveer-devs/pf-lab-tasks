## What is a class:
    // A class is like a blueprint for creating objects

## Syntax: 

    class{
        access control public/private/protected:
             description
    };

## Access specifiers:
    public: isko ko ham class ke bahir access kar sktay hain
    private: isko ham sirf class ke andar hi access kar sktay hain
    protected: will learn in inheritance

## Object: object is a actual instance of a class
    e.g: 
    class stdent{
        public:
            string name;
            int rollno;
            float gpa;
    }
    stdent s1;   // this is a object
    stdent s2;   // this is also a object

## how to access/modify vals:

    s1.name = "Alveena";
    s1.rollNo = "053-26-0007";
    s1.gpa = 4.0;

## Class members:
    Data members: These are variables which belong to object
    Members functions: Functions belonging to class
    e.g:

    class Student {
        public: 
            string name;
            int rollNo;
            float gpa;
        
        void display(){
            cout << "Name: " << name;
            cout << "RollNo: " << rollNo;
        }
    }

    Here name, rollNo are data members and display() is a member function

## Vals can also be assigned by using Functions
    class Student {
        public: 
            string name;
            int rollNo;
            float gpa;
        void setVals(string n, int r){
            name = n;
            rollNo = r;
        }
        void display(){
            cout << "Name: " << name;
            cout << "RollNo: " << rollNo;
        }
    }
    Student s1;
    s1.setVals("Alveena", 05326007);  // assigning vals by functions
    
## Encapsulation: It means that keeping the data and operations that control that data together and restricting inappropriate direct access  

## Encapsulation ka mtlb hai ke data or jo operation us data ko control krtay hain unko saath main rkhna and us data main direct ko band krna...

    class Student {
        private:
            float gpa;
        public: 
            void setGpa(float val){
                if(gpa >= 0 && gpa <= 4.0){
                    gpa = val;
                }
            }
            float getGpa(){
                return gpa;
            }
    };
    
    Student s1;
    s1.gpa = 10;  // yeh nh ho skta
    s1.setGpa(3.5) // aese krna padega

// Is code main main ham gpa ko private access specifier main daal diya hai jiski wajah se ham directly gpa ko modify nh kar sktay balkay hamay gpa ko modify krne ke liye setGpa() function call krna padega kiynke woh class ke andar hi hai, and ham getGpa() function se gpa ko access kar sakenge.


## Getters and Setters:
    Getter: Getter private val ko retrieve krta hai 
    Setter: Setter private val ko change krta hai

## Naming convention: 
    setSomething();
    getSomething();

## Why not make everything Public:


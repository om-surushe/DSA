# C++ Cheatsheet

A quick reference for some important language features and concepts in C++.

## Basic syntax
```
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```

## Variables
```
int x = 5; // integers
double y = 5.5; // floating-point numbers
char c = 'a'; // characters
string s = "hello"; // strings
bool b = true; // booleans
```

## Operators
```
+ - * / % // arithmetic operators
== != > < >= <= // comparison operators
&& || ! // logical operators
```

## Control flow
```
if (condition) { // if-else statement
    // code to be executed if condition is true
} else {
    // code to be executed if condition is false
}

for (int i = 0; i < 10; i++) { // for loop
    // code to be executed 10 times
}

while (condition) { // while loop
    // code to be executed while condition is true
}
```

## Arrays and loops
```
int a[5]; // array of integers
for (int i = 0; i < 5; i++) {
    a[i] = i;
}
```
## Functions
```
int add(int x, int y) { // function definition
    return x + y;
}
int result = add(5, 6); // function call
```

## Pointers
```
int x = 5;
int* p = &x;
cout << *p;  //5
```

## Classes and objects
```
class MyClass {
    public:
        int x;
        void print() {
            cout << x;
        }
};

MyClass obj;
obj.x = 5;
obj.print(); // 5
```
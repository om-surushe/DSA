# Java Cheatsheet

A quick reference for some syntax Java.

## Basic syntax
```
public class Main {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
}
```

## Variables
```
int x = 5; // integers
double y = 5.5; // floating-point numbers
char c = 'a'; // characters
String s = "hello"; // strings
boolean b = true; // booleans
```

## Operators
```
x + y; // addition
x - y; // subtraction
x * y; // multiplication
x / y; // division
x % y; // modulus
x++; // increment
x--; // decrement
```

## Comparison operators
```
x == y; // equal to
x != y; // not equal to
x > y; // greater than
x < y; // less than
x >= y; // greater than or equal to
x <= y; // less than or equal to
```

## Logical operators
```
x && y; // and
x || y; // or
!x; // not
```

## Control flow
```
if (x == y) { // if statement
    // code to be executed if x is equal to y
} else if (x > y) {
    // code to be executed if x is greater than y
} else {
    // code to be executed if x is less than y
}

for (int i = 0; i < 10; i++) { // for loop
    // code to be executed 10 times
}

while (x < y) { // while loop
    // code to be executed while x is less than y
}
```

## Arrays
```
int[] a = new int[5]; // array of integers
for (int i = 0; i < 5; i++) {
    a[i] = i;
}
```

## Functions
```
public int add(int x, int y) { // function definition
    return x + y;
}
int result = add(5, 6); // function call
```

## Classes and objects
```
class MyClass {
    public int x;
    public void print() {
        System.out.println(x);
    }
}

MyClass obj = new MyClass();
obj.x = 5;
obj.print(); // 5
```
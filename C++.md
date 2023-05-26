# C++ Cheatsheet

A quick reference for some important language features and concepts in C++.

## Table of Contents

<details>
  <summary>Basic syntax</summary>

```
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```

</details>


<details>
  <summary>Variables</summary>

```
int x = 5; // integers
double y = 5.5; // floating-point numbers
char c = 'a'; // characters
string s = "hello"; // strings
bool b = true; // booleans
```

</details>

<details>
  <summary>Operators</summary>
  
```
+ - * / % // arithmetic operators
== != > < >= <= // comparison operators
&& || ! // logical operators
```

</details>

<details>
  <summary>Control flow</summary>

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

</details>

<details>
  <summary>Arrays and loops</summary>

```
int a[5]; // array of integers
for (int i = 0; i < 5; i++) {
    a[i] = i;
}
```

</details>

<details>
  <summary>Functions</summary>

```
int add(int x, int y) { // function definition
    return x + y;
}
int result = add(5, 6); // function call
```

</details>

<details>
  <summary>Pointers</summary>

```
int x = 5;
int* p = &x;
cout << *p;  //5
```

</details>

<details>
  <summary>Classes and objects</summary>

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

</details>

<details>
  <summary>Kadane's Algorithm</summary>

```
int maxSubArray(vector<int>& nums) {
    int max_so_far = INT_MIN, max_ending_here = 0;
    for (int i = 0; i < nums.size(); i++) {
        max_ending_here = max_ending_here + nums[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
```

</details>

<details>
  <summary>Dynamic Programming</summary>

```
int climbStairs(int n) {
    if (n == 1) return 1;
    vector<int> dp(n + 1);
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
```

</details>

<details>
  <summary>Hash Table</summary>

```
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            if (s.find(nums[i]) != s.end()) return true;
            s.insert(nums[i]);
        }
        return false;
    }
};
```

</details>

<details>
  <summary>Two Pointers</summary>

```
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, k = m + n - 1;
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};
```

</details>

<details>
  <summary>Binary Search</summary>

```
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) l = mid + 1;
            else r = mid - 1;
        }
        return -1;
    }
};
```

</details>

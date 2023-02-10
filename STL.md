STL is a library of generic data structures and algorithms. It is a part of the C++ standard library.

## Data Structures

<details>
<summary>Vector</summary>

here are all the methods of the vector class:

```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> v; // create an empty vector of integers
    v.push_back(1); // add an element to the end
    v.push_back(2);
    v.push_back(3);
    v.pop_back(); // remove the last element
    v.insert(v.begin(), 4); // insert 4 at the beginning
    v.erase(v.begin() + 2); // erase the 3rd element
    v.clear(); // remove all elements
    v.empty(); // check if empty
    v.size(); // number of elements
    v.resize(5); // resize the container so that it contains 5 elements
    v.resize(8, 100); // resize the container so that it contains 8 elements. If the current size is less than 8, 
                      // append 100 5 times
    v.front(); // first element
    v.back(); // last element
    v.at(2); // element at 2nd position
    v[2]; // same as v.at(2)
    v.begin(); // returns an iterator to the first element
    v.end(); // returns an iterator to the theoretical element that follows the last element
    v.rbegin(); // returns a reverse iterator to the last element
    v.rend(); // returns a reverse iterator to the theoretical element preceding the first element
    v.cbegin(); // returns a constant iterator to the first element
    v.cend(); // returns a constant iterator to the theoretical element that follows the last element
    v.crbegin(); // returns a constant reverse iterator to the last element
    v.crend(); // returns a constant reverse iterator to the theoretical element preceding the first element
    v.assign(7, 100); // assign new value to vector elements by replacing old ones
    v.assign(v2.begin(), v2.end()); // assign new value to vector elements by replacing old ones
    v.assign({1, 2, 3, 4}); // assign new value to vector elements by replacing old ones
    v.swap(v2); // swap contents
    v.clear(); // clear all content
    v.get_allocator(); // get allocator
}
```

</details>

<details>
<summary>List</summary>

here are all the methods of the list class:

```cpp
#include <list>
using namespace std;

int main() {
    list<int> l; // create an empty list of integers
    l.push_back(1); // add an element to the end
    l.push_back(2);
    l.push_back(3);
    l.push_front(4); // add an element to the beginning
    l.pop_back(); // remove the last element
    l.pop_front(); // remove the first element
    l.insert(l.begin(), 5); // insert 5 at the beginning
    l.erase(l.begin()); // erase the first element
    l.clear(); // remove all elements
    l.empty(); // check if empty
    l.size(); // number of elements
    l.front(); // first element
    l.back(); // last element
    l.begin(); // returns an iterator to the first element
    l.end(); // returns an iterator to the theoretical element that follows the last element
    l.rbegin(); // returns a reverse iterator to the last element
    l.rend(); // returns a reverse iterator to the theoretical element preceding the first element
    l.cbegin(); // returns a constant iterator to the first element
    l.cend(); // returns a constant iterator to the theoretical element that follows the last element
    l.crbegin(); // returns a constant reverse iterator to the last element
    l.crend(); // returns a constant reverse iterator to the theoretical element preceding the first element
    l.assign(7, 100); // assign new value to list elements by replacing old ones
    l.assign(l2.begin(), l2.end()); // assign new value to list elements by replacing old ones
    l.assign({1, 2, 3, 4}); // assign new value to list elements by replacing old ones
    l.swap(l2); // swap contents
    l.clear(); // clear all content
    l.get_allocator(); // get allocator
}
```

</details>

<details>
<summary>Stack</summary>

here are all the methods of the stack class:

```cpp
#include <stack>
using namespace std;

int main() {
    stack<int> s; // create an empty stack of integers
    s.push(1); // push 1 onto the stack
    s.push(2);
    s.push(3);
    s.pop(); // remove the top element
    s.top(); // get the top element
    s.size(); // number of elements
    s.empty(); // check if empty
}
```

</details>

<details>
<summary>Queue</summary>

here are all the methods of the queue class:

```cpp
#include <queue>
using namespace std;

int main() {
    queue<int> q; // create an empty queue of integers
    q.push(1); // push 1 onto the queue
    q.push(2);
    q.push(3);
    q.pop(); // remove the front element
    q.front(); // get the front element
    q.back(); // get the back element
    q.size(); // number of elements
    q.empty(); // check if empty
}
```

</details>

<details>
<summary>Priority Queue</summary>

here are all the methods of the priority_queue class:

```cpp
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq; // create an empty priority queue of integers
    pq.push(1); // push 1 onto the priority queue
    pq.push(2);
    pq.push(3);
    pq.pop(); // remove the top element
    pq.top(); // get the top element
    pq.size(); // number of elements
    pq.empty(); // check if empty
}
```

</details>

<details>
<summary>Set</summary>

here are all the methods of the set class:

```cpp
#include <set>
using namespace std;

int main() {
    set<int> s; // create an empty set of integers
    s.insert(1); // insert 1 into the set
    s.insert(2);
    s.insert(3);
    s.erase(2); // erase 2 from the set
    s.count(2); // number of elements with value 2
    s.find(2); // iterator to 2, if 2 is not found, it returns an iterator to set::end
    s.lower_bound(2); // iterator to the first element that is not less than 2
    s.upper_bound(2); // iterator to the first element greater than 2
    s.equal_range(2); // returns the bounds of a range that includes all the elements in the container which have a key equivalent to 2
    s.size(); // number of elements
    s.empty(); // check if empty
    s.clear(); // remove all elements
    s.begin(); // returns an iterator to the first element
    s.end(); // returns an iterator to the theoretical element that follows the last element
    s.rbegin(); // returns a reverse iterator to the last element
    s.rend(); // returns a reverse iterator to the theoretical element preceding the first element
    s.cbegin(); // returns a constant iterator to the first element
    s.cend(); // returns a constant iterator to the theoretical element that follows the last element
    s.crbegin(); // returns a constant reverse iterator to the last element
    s.crend(); // returns a constant reverse iterator to the theoretical element preceding the first element
    s.swap(s2); // swap contents
    s.get_allocator(); // get allocator
}
```

</details>

<details>
<summary>Map</summary>

here are all the methods of the map class:

```cpp
#include <map>
using namespace std;

int main() {
    map<int, int> m; // create an empty map from integers to integers
    m.insert({1, 10}); // insert {1, 10} into the map
    m.insert({2, 20});
    m.insert({3, 30});
    m.erase(2); // erase 2 from the map
    m.count(2); // number of elements with key 2
    m.find(2); // iterator to {2, 20}, if 2 is not found, it returns an iterator to map::end
    m.lower_bound(2); // iterator to the first element that is not less than key 2
    m.upper_bound(2); // iterator to the first element greater than key 2
    m.equal_range(2); // returns the bounds of a range that includes all the elements in the container which have a key equivalent to 2
    m.size(); // number of elements
    m.empty(); // check if empty
    m.clear(); // remove all elements
    m.begin(); // returns an iterator to the first element
    m.end(); // returns an iterator to the theoretical element that follows the last element
    m.rbegin(); // returns a reverse iterator to the last element
    m.rend(); // returns a reverse iterator to the theoretical element preceding the first element
    m.cbegin(); // returns a constant iterator to the first element
    m.cend(); // returns a constant iterator to the theoretical element that follows the last element
    m.crbegin(); // returns a constant reverse iterator to the last element
    m.crend(); // returns a constant reverse iterator to the theoretical element preceding the first element
    m.swap(m2); // swap contents
    m.get_allocator(); // get allocator
}
```

</details>

<details>
<summary>Unordered Set</summary>

here are all the methods of the unordered_set class:

```cpp
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us; // create an empty unordered set of integers
    us.insert(1); // insert 1 into the unordered set
    us.insert(2);
    us.insert(3);
    us.erase(2); // erase 2 from the unordered set
    us.count(2); // number of elements with value 2
    us.find(2); // iterator to 2, if 2 is not found, it returns an iterator to unordered_set::end
    us.size(); // number of elements
    us.empty(); // check if empty
    us.clear(); // remove all elements
    us.begin(); // returns an iterator to the first element
    us.end(); // returns an iterator to the theoretical element that follows the last element
    us.cbegin(); // returns a constant iterator to the first element
    us.cend(); // returns a constant iterator to the theoretical element that follows the last element
    us.swap(us2); // swap contents
    us.get_allocator(); // get allocator
}
```

</details>

<details>
<summary>Unordered Map</summary>

here are all the methods of the unordered_map class:

```cpp
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> um; // create an empty unordered map from integers to integers
    um.insert({1, 10}); // insert {1, 10} into the unordered map
    um.insert({2, 20});
    um.insert({3, 30});
    um.erase(2); // erase 2 from the unordered map
    um.count(2); // number of elements with key 2
    um.find(2); // iterator to {2, 20}, if 2 is not found, it returns an iterator to unordered_map::end
    um.size(); // number of elements
    um.empty(); // check if empty
    um.clear(); // remove all elements
    um.begin(); // returns an iterator to the first element
    um.end(); // returns an iterator to the theoretical element that follows the last element
    um.cbegin(); // returns a constant iterator to the first element
    um.cend(); // returns a constant iterator to the theoretical element that follows the last element
    um.swap(um2); // swap contents
    um.get_allocator(); // get allocator
}
```

</details>
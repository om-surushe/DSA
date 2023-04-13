#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int fibonacci(int n)
{
    int current = 0, next = 1, sum, i;
    if (n == 0)
        return current;
    for (i = 2; i <= n; i++)
    {
        sum = current + next;
        current = next;
        next = sum;
    }
    return next;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    auto start_time = high_resolution_clock::now();
    cout << fibonacci(n) << endl;

    auto stop_time = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop_time - start_time);

    cout << "Duration : " << duration.count() << "ms" << endl;
    return 0;
}

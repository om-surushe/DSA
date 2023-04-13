#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
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

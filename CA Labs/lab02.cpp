#include <iostream>
#include <chrono>
#include <random>

using namespace std::chrono;
using namespace std;

void quicksort(float arr[], int left, int right);

int main()
{
    int size;
    float *array;

    cout
        << "Enter the size of the array: ";
    cin >> size;

    array = new float[size];

    // Generate random numbers and fill the array
    std::default_random_engine generator;
    std::uniform_real_distribution<float> distribution(0.0, 1.0);
    for (int i = 0; i < size; i++)
    {
        array[i] = distribution(generator);
    }

    auto start_time = high_resolution_clock::now();
    quicksort(array, 0, size - 1);
    auto stop_time = high_resolution_clock::now();

    // Calculate the time taken by quicksort algorithm
    auto duration = duration_cast<microseconds>(stop_time - start_time);

    cout << "\nTime taken by quicksort algorithm: " << duration.count() << " microseconds" << endl;

    delete[] array;
    return 0;
}

void quicksort(float arr[], int left, int right)
{
    int pivot, i, j, temp;

    if (left < right)
    {
        pivot = left;
        i = left;
        j = right;

        while (i < j)
        {
            while (arr[i] <= arr[pivot] && i < right)
            {
                i++;
            }
            while (arr[j] > arr[pivot])
            {
                j--;
            }
            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;

        quicksort(arr, left, j - 1);
        quicksort(arr, j + 1, right);
    }
}
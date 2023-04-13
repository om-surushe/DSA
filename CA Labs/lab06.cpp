#include <iostream>
#include <vector>

using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knapsack(int capacity, int weights[], int values[], int n_items)
{
    vector<vector<int>> dp(n_items + 1, vector<int>(capacity + 1));

    for (int i = 0; i <= n_items; i++)
    {
        for (int w = 0; w <= capacity; w++)
        {
            if (i == 0 || w == 0)
            {
                dp[i][w] = 0;
            }
            else if (weights[i - 1] <= w)
            {
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]],
                               dp[i - 1][w]);
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n_items][capacity];
}

int main()
{
    int values[] = {60, 100, 120};
    int weights[] = {10, 20, 30};
    int capacity = 50;
    int n_items = sizeof(values) / sizeof(values[0]);

    cout << "Maximum knapsack value: " << knapsack(capacity, weights, values, n_items) << endl;

    return 0;
}

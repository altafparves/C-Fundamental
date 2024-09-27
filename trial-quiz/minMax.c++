#include <iostream>
#include <vector>
#include <limits.h> // For INT_MIN and INT_MAX
using namespace std;

int main()
{
    int n;

    // Input the number of elements
    cin >> n;

    // Use vector to handle dynamic array size
    vector<int> arr(n);

    // Input the elements of the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Initialize min and max variables
    int maxElement = INT_MIN;
    int minElement = INT_MAX;

    // Loop through the array to find max and min
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
    }

    // Output the max and min elements
    cout << "Max: " << maxElement << endl;
    cout << "Min: " << minElement << endl;

    return 0;
}

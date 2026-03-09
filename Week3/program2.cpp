#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int comparisons = 0;
        int swaps = 0;

        for(int i = 0; i < n - 1; i++)
        {
            int minIndex = i;

            for(int j = i + 1; j < n; j++)
            {
                comparisons++;

                if(arr[j] < arr[minIndex])
                {
                    minIndex = j;
                }
            }

            if(minIndex != i)
            {
                int temp = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = temp;
                swaps++;
            }
        }

        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "comparisons = " << comparisons << endl;
        cout << "swaps = " << swaps << endl;
    }

    return 0;
}

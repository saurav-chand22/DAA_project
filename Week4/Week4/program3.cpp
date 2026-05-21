#include <iostream>
#include <algorithm>

using namespace std;

int partition(int arr[], int l, int r, int x)
{
    int i;

    for(i = l; i < r; i++)
    {
        if(arr[i] == x)
            break;
    }

    swap(arr[i], arr[r]);

    i = l;

    for(int j = l; j < r; j++)
    {
        if(arr[j] <= x)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }

    swap(arr[i], arr[r]);

    return i;
}

int kthSmallest(int arr[], int l, int r, int k)
{
    if(k > 0 && k <= r - l + 1)
    {
        int n = r - l + 1;

        sort(arr + l, arr + r + 1);

        return arr[l + k - 1];
    }

    return -1;
}

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int n;
        cin >> n;

        int arr[n];

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        int k;
        cin >> k;

        if(k > n || k <= 0)
        {
            cout << "not present" << endl;
        }
        else
        {
            int result = kthSmallest(arr, 0, n - 1, k);

            cout << result << endl;
        }
    }

    return 0;
}

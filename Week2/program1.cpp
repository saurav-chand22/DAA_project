#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int> &arr, int n, int key)
{
    int left = 0;
    int right = n - 1;
    int result = -1;

    while(left <= right)
    {
        int mid = (left + right) / 2;

        if(arr[mid] == key)
        {
            result = mid;
            right = mid - 1;
        }
        else if(arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return result;
}

int lastOccurrence(vector<int> &arr, int n, int key)
{
    int left = 0;
    int right = n - 1;
    int result = -1;

    while(left <= right)
    {
        int mid = (left + right) / 2;

        if(arr[mid] == key)
        {
            result = mid;
            left = mid + 1;
        }
        else if(arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return result;
}

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

        int key;
        cin >> key;

        int first = firstOccurrence(arr, n, key);
        int last = lastOccurrence(arr, n, key);

        if(first == -1)
        {
            cout << "Key not present" << endl;
        }
        else
        {
            cout << key << " " << (last - first + 1) << endl;
        }
    }

    return 0;
}

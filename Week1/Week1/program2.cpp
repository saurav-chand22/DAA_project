
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

        int key;
        cin >> key;

        int left = 0;
        int right = n - 1;
        int comparisons = 0;
        bool found = false;

        while(left <= right)
        {
            int mid = (left + right) / 2;
            comparisons++;

            if(arr[mid] == key)
            {
                found = true;
                break;
            }
            else if(key < arr[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        if(found)
        {
            cout << "Present " << comparisons << endl;
        }
        else
        {
            cout << "NotPresent " << comparisons << endl;
        }
    }

    return 0;
}

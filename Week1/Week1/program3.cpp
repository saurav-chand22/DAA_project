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

        int comparisons = 0;
        bool found = false;

        int i = 0;

        while(i < n && arr[i] < key)
        {
            comparisons++;
            i = i + 2;
        }

        int start = i - 2;
        if(start < 0)
        {
            start = 0;
        }

        int end = i;
        if(end >= n)
        {
            end = n - 1;
        }

        for(int j = start; j <= end; j++)
        {
            comparisons++;

            if(arr[j] == key)
            {
                found = true;
                break;
            }
        }

        if(found)
        {
            cout << "Present " << comparisons << endl;
        }
        else
        {
            cout << "Not Present " << comparisons << endl;
        }
    }

    return 0;
}

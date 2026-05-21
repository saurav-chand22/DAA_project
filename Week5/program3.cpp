#include <iostream>

using namespace std;

int main()
{
    int m;
    cin >> m;

    int arr1[m];

    for(int i = 0; i < m; i++)
        cin >> arr1[i];

    int n;
    cin >> n;

    int arr2[n];

    for(int i = 0; i < n; i++)
        cin >> arr2[i];

    int i = 0;
    int j = 0;

    bool found = false;

    while(i < m && j < n)
    {
        if(arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            found = true;

            i++;
            j++;
        }
        else if(arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    if(!found)
    {
        cout << "No Common Elements";
    }

    return 0;
}

#include <iostream>
using namespace std;

class Array
{
public:
    int arr[30], n;

    void create()
    {
        cout << "Enter size :";
        cin >> n;
        cout << "Enter array elements :\n";

        for (int i = 1; i <= n; i++)
        {

            cin >> arr[i];
        }
    }

    void display()
    {
        cout << "Elements entered in array : ";

        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    void disp_rev()
    {
        cout << "Reversed array elements : ";

        for (int i = n; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    Array obj;
    obj.create();
    obj.display();
    obj.disp_rev();

    return 0;
}
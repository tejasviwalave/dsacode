#include<iostream>
using namespace std;
void bubble_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main(){
    int n;
    int a[10];
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter" << n<< "integers in any order: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bubble_sort(a, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

//output: PS C:\Users\student\Desktop\tejasvi c++> cd "c:\Users\student\Desktop\tejasvi c++\" ; if ($?) { g++ bubble_sort.cpp -o bubble_sort } ; if ($?) { .\bubble_sort }
Enter the size of the array: 5
Enter5integers in any order: 
23 44 12 56 78 
Sorted array: 12 23 44 56 78 
PS C:\Users\student\Desktop\tejasvi c++> 



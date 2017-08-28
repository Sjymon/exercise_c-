// Example program
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    
    int a[10], b[10];
    int i = 0;
    while (n != 0){
        a[i] = n % 2;
        n = n/2;
        i++;
    }
    
    for (int j = 0; j < i; j++)
    {
        b[j] = a[j];
        cout << b[j];
    }
    cout << endl;
    int result = 0;
    int k = 0;
    for (int j = i-1; j >= 0; j--)
    {
        cout << a[j];
        result += (pow(2, k))*b[j];
        k++;
    }
    cout << endl;
    cout << result;
    return 0;
    
}

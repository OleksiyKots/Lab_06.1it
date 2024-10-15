#include <iostream>
#include <iomanip>

using namespace std;

void create(int* arr, int SIZE, int MIN, int MAX)
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
    }
}

void Print(int* arr, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

int Sum(int* arr, int SIZE)
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < 0 && arr[i] % 2 == 0)
            sum += arr[i];
    }
    return sum;
}

int Count(int* arr, int SIZE)
{
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < 0 && arr[i] % 2 == 0)
            count++;
    }
    return count;
}

void updateArray(int* arr, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < 0 && arr[i] % 2 == 0)
        {
            arr[i] = 0;
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    const int SIZE = 20;
    int arr[SIZE];
    create(arr, SIZE, -20, 34);
    Print(arr, SIZE);
    cout << endl;
    cout << "sum = " << Sum(arr, SIZE) << endl;
    cout << "count = " << Count(arr, SIZE) << endl;
    updateArray(arr, SIZE);
    Print(arr, SIZE);
    cout << endl;
    return 0;
}

#include <iostream>

using namespace std;

void Print_arr(int** arr, int j, int k)
{
    cout << "\n";

    for (int i = 0; i < j; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout <<"\t" << arr[i][j] << "\t ";
        }
        cout << "\n";
    }

    for (int i = 0; i < j; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
}

int** Set_arr(int j, int k)
{
    int** arr = new int* [j];

    for (int i = 0; i < j; i++)
    {
        arr[i] = new int[k];
    }

    for (int i = 0; i < j; i++)
    {
        for (int j = 0; j < k; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }
    return arr;
}

int main()
{
    setlocale(LC_ALL, "rus");

    int k = 0, j = 0;

    cout << "\nВведите количество строк\n";

    cin >> j;

    cout << "\nВведите количество столбцов\n";

    cin >> k;

    Print_arr(Set_arr(j, k), j, k);

    return 0;
}
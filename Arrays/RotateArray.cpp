#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;

void rotateLeft(int arr[], int N, int K)
{
    // If K is greater than N, take its modulo to avoid unnecessary rotations
    K = K % N;

    // Use std::rotate to rotate the array to the left by K steps
    rotate(arr, arr + K, arr + N);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N, K;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    cin >> K;

    rotateLeft(arr, N, K);
    printArray(arr, N);

    return 0;
}
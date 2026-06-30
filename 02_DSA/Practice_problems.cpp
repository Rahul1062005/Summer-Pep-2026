//int arr[] = {3, 5, 1, 12, 36, 32, 4}; key = 12
//find the key in array using linear search,
//if the key is found and value of key is = 10,
//then return double the value of key,
//otherwise return the half value of key

// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int size, int key)
// {
//     for(int i = 0; i < size; i++)
//     {
//         if(arr[i] == key)
//         {
//             if(key == 10)
//             {
//                 return key * 2;
//             }
//             else
//             {
//                 return key / 2;
//             }
//         }
//     }

//     return -1; // key not found
// }

// int main()
// {
//     int arr[] = {3, 5, 1, 12, 36, 32, 4};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int key = 12;

//     cout << linearSearch(arr, size, key);

//     return 0;
// }
//------------------------------------------------------------------------------------------------------------------------------------


// Finding the index of the element in array using binary search

// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int key, int size){
//     int s = 0, e = size - 1;

//     while(s <= e){
//         int mid = (s + e)/2;

//         if(arr[mid] == key) return mid;

//         else if(arr[mid] < key) s = mid + 1;

//         else e = mid - 1;
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int key = 12;
//     int ans = binarySearch(arr,key,n);
//     cout<<ans<<endl;
//     return 0;
// }
//----------------------------------------------------------------------------------------------------------------------------------


// Recursion Problems

#include <iostream>
using namespace std;

// void printNumbers(int n)
// {
//    
//     if (n > 10)
//     {
//         return;
//     }

//    
//     cout << n << " ";

//     
//     printNumbers(n + 1);
// }

// int main()
// {
//     printNumbers(1);

//     return 0;
// }

int factorial(int n){
    if(n == 0 || n == 1) return 1;

    return n * factorial(n - 1);
}

int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fib(n-1) + fib(n - 2);
}

int main()
{

}
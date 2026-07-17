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
//----------------------------------------------------------------------------------------------------------------------------------------


// Recursion Problems

// #include <iostream>
// using namespace std;

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
//---------------------------------------------------------
// int factorial(int n){
//     if(n == 0 || n == 1) return 1;

//     return n * factorial(n - 1);
// }

// int fib(int n){
//     if(n == 0) return 0;
//     if(n == 1) return 1;

//     return fib(n-1) + fib(n - 2);
// }

// int main()
// {
//     cout << factorial(5);
// }

//-----------------------------------------------------------------------------------------------------------------------------------------


//2d array

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[3][4];

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 4; j++){
//             cin >> arr[i][j];
//         }
//     }

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 4; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
//----------------------------------------------------------------------------------------------------------------------------------------


//Stack overflow and underflow

// #include<iostream>
// using namespace std;

// class MyStack{



















//     void pop(){

//         if(top == -1)
//     }


// }
//-----------------------------------------------------------------------------------------------------------------------------------------


// #include<iostream>
// #include<stack>
// using namespace std;

// int main()
// {
//     stack<int> st;
//     st.push(5);
//     st.push(15);
//     st.push(25);

//     cout << "top element : " << st.top() << endl;
//     st.pop();

//     cout << "top element : " << st.top() << endl;
// }
//-----------------------------------------------------------------------------------------------------------------------------------------


// Queue

// #include<iostream>
// using namespace std;

// class MyQueue{
//     public:
//     int * arr;
//     int front;
//     int rear;
//     int size;

//     MyQueue(int size){
//         this->size = size;
//         arr = new int[size];
//         front = -1;
//         rear = -1;
//     }

//     void enqueue(int val)
//     {
//         if(rear == size - 1){
//             cout << "Queue Overflow" << endl;
//             return;
//         }
//         if(front == -1){
//             front = 0;
//         }
//         rear ++;
//         arr[rear = val];
//     }

//     void dequeue()
//     {
//         if(front == -1 ||  front > rear){
//             cout << "Queue Underflow" << endl;
//             return;
//         }
//         front++;
//     }
// };

// int main()
// {
    
// }
//-----------------------------------------------------------------------------------------------------------------------------------------


// Reversing string using stack

//-----------------------------------------------------------------------------------------------------------------------------------------


//

// #include<iostream>
// #include<stack>
// using namespace std;

// int prefixEval(string s){

//     stack<int> st;

//     for(int i = s.length() - 1; i >= 0; i--){
//         if(s[i] >= '0' && s[i] <= 0){
//             st.push (s[i] = '0');
//         }
//         else{
            
//         }
//     }
    
// }

// int main()
// {
//     string s = ""
// }
//-----------------------------------------------------------------------------------------------------------------------------------------

// Template for node in a tree

// #include<iostream>
// using namespace std;

// class Node{
// public:
//     Node* left;
//     Node* right;
//     int data;
//     Node(int val){
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };

// int main(){

// }
//------------------------------------------------------------------------------------------------------------------------------------------

// Functions for pre-order, in-order, post-order, countNode, countLeaf

#include<iostream>
using namespace std;

class Node{
public:
    Node* left;
    Node* right;
    int data;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void preorder(Node* root){
    if(!root) return;
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}

void postorder(Node* root){
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<endl;
}

int countNode(Node* root){
    if (root == nullptr) return 0;
    int x = countNode(root->left);
    int y = countNode(root->right);
    return 1+x+y;
}

int countLeaf(Node* root){
    if(root == nullptr) return 0;
    if(root->left == nullptr && root->right == nullptr){
        return 1;
    }
    return countLeaf(root->left) + countLeaf(root->right);
}


int main(){

}
//--------------------------------------------------------------------------------------------------------------------------------------------


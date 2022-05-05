#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


// int main(){

//     // for (int a = 0 ; a <= 20 ; a+=2){
//     //     cout << "a = " << a << endl; 
//     // }

//     // int a = 0;
//     // do {
//     //     cout << "a = " << a << endl;
//     //     a += 2;
//     // } while (a < 2);

//     // int x;
//     // cin >> x;
//     // switch(x){
//     //     case 1:
//     //         cout << "x = 1" << endl;
//     //         break;
//     //     case 2:
//     //         cout << "x = 2" << endl;
//     //         break;
//     //     case 3:
//     //         cout << "x = 3" << endl;
//     //         break;
//     //     default:
//     //         cout << "Default = " << x << endl;
//     //         break;
//     // }

//     // int n;
//     // cin >> n;
//     // for (int i = n ; i > 0 ; i--){
//     //     cout << i << endl;
//     //     if (i % 5 == 0){
//     //         cout << "Beep" << endl;
//     //     }
//     // }

//     // int myArray[5];
//     // for (int i = 0 ; i < 5 ; i++){
//     //     myArray[i] =  2;
//     //     cout << myArray[i] << endl; 
//     // }


//     // int arr [] {1,2,3,4,5};
//     // int sum = 0;

//     // for (int i = 0 ; i < 5 ; i++){
//     //     sum += arr[i];
//     // }

//     // cout << "Sum = " << sum << endl;


//     // int a {5};
//     // cout << "location = " << &a << endl;
//     // cout << "value = " << a << endl;

//     // int score = 5;
//     // int *scorePtr;

//     // scorePtr = &score;
//     // cout << "location = " << scorePtr << endl;
//     // cout << "value = " << score << endl;

//     // int *scorePtr = new int; // request memory
//     // *scorePtr = 5; // store value

//     // cout << "location = " << scorePtr << endl;
//     // cout << "value = " << *scorePtr << endl;

//     // delete scorePtr; // release memory
//     // scorePtr = new int; reuse for new address

//     // int *scorePtr = NULL; // Pointer to NULL
//     // scorePtr = new int[20]; // request memory
//     // delete [] scorePtr; // delete array pointed to by scorePtr

//     // int ages[5];
//     // double price;
//     // for (int i = 0; i < 5; ++i) {
//     //     cin >> ages[i];
//     // }
//     // double min = ages[0];
//     // for (int i = 0; i < 5; ++i) {
//     //         if (ages[i] < min) {
//     //             min = ages[i];
//     //         }
//     // }

//     // price = 50 - (min*50/100);
//     // cout << price << endl;

//     return 0;
// }

// void printSomething(){
//     cout << "Hello" << endl;
// }

// int returnInt(){
//     srand(time(0));
//     return rand()%10 ;
// }

// int factorial(int n){
//     if (n == 0){
//         return 1;
//     }
//     return n * factorial(n-1);
// }

// void printArray(int arr[], int size){
//     for (int i = 0; i < size; ++i) {
//         cout << arr[i] << endl;
//     }
// }

// void myFunct(int x) {
//     x = 100;
// }

// void myFunct(int *x) {
//     *x = 100;
// }

// bool isPalindrome(int num) {
//     //complete the function
//     int x, digit, rev = 0;
//     x = num;
//      do
//      {
//          digit = num % 10;
//          rev = (rev * 10) + digit;
//          num = num / 10;
//      } while (num != 0);

//     if (rev == x)
//         return true;
//     else
//         return false;

// }

// int main() {
//     int n;
//     cin >>n;
//     cout << isPalindrome(n) << endl;

    
    // if(isPalindrome(n)) {
    //     cout <<n <<" is a palindrome";
    // }
    // else {
    //     cout << n <<" is NOT a palindrome";
    // }
//     return 0;
// }


// class BankAccount {
//     private:
//         /* data */
//     public:
//         void sayHi() {
//             cout << "Hi" << endl;
//         }
// };


class myClass{
    public:
        myClass(string nm){
            cout << "Constructor" << endl;
            setName(nm);
        }
        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }
    private:
        string name;
};

int main(){
    myClass myObj("John");
    myClass myObj2("Mary");
    // myObj.setName("Nacim");
    cout << myObj.getName() << endl;
    cout << myObj2.getName() << endl;
    return 0;
}
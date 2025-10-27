// #include <iostream>

// using namespace std;
// int main(){
//   cout<<"Hello world"<<endl;
//   return 0;
// }

// *******************************Addition of two numbers*********************************

// #include <iostream>
// using namespace std;
// int main(){
// int a = 12;
// int b = 13;
// int sum = a + b;
// cout<<sum<<endl;
// return 0;
// }

// ****************************Taking input from user****************************
// #include <iostream>
// #include <string>
// using namespace std;
// 
// int main(){
//   string name;
//   cout<<"enter your name"<<endl;
//   cin>>name;
//   cout<<"your name is:"<<name<<endl;
// }

// ******************************Conditional statements***************************
// #include <iostream>
// using namespace std;
// int main(){
//   int age;
//   cout<<"enter your age"<<endl;
//   cin>>age;
//   if (age<=18)
//   {
//       cout<<"you cannot drive"<<endl;
//   }
//   else if (age > 18)
//   {
//        cout<<"you can drive"<<endl;
//   }
//   else
//   {
//     cout<<"enter a valid age"<<endl;
//   }
// }

// ***********************************Odd and Even*******************************
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter the value of n"<<endl;
//   cin>>n;

//   if (n%2 == 0 )
//   {
//     cout<<"it is an even number"<<endl;
//   }
//   else if (n%2 != 0)
//   {
//     cout<<"its an odd number"<<endl;
//   }
//   else {
//     cout<<"Enter a valid number"<<endl;
//   }
// }

// **************************grading on basis of marks****************************

// #include <iostream>
// using namespace std;
// int main(){
//   int marks;
//   cout<<"enter marks"<<endl;
//   cin>>marks;
//   if (marks >= 85)
//   {
//     cout<<"GPA: 4.00"<<endl;
//   }
//   else if (marks <= 80 && marks >75)
//   {
//     cout<<"GPA: 3.50"<<endl;
//   }
//   else if (marks <=75 && marks >65)
//   {
//     cout<<"GPA: 3.00"<<endl;
//   }
//   else if (marks <=65 && marks > 55)
//   {
//     cout<<"GPA: 2.50"<<endl;
//   }
//   else{
//     cout<<"GPA: 2.00"<<endl;
//   }
//   return 0;
// }

// ****************************uppercase and lowercase check****************
// #include <iostream>
// using namespace std;
// int main(){
//   char a;
//   cout<<"enter character"<<endl;
//   cin>>a;
//     if (a >= 'a' && a <= 'z')
//   {
//     cout<<"Lowercase"<<endl;
//   }
//   else{
//     cout<<"uppercase"<<endl;
//   }
// }

// ********************************Ternary statement******************
// #include <iostream>
// using namespace std;
// int main(){
//   int a;
//   cout<<"enter value of a"<<endl;
//   cin>>a;
//   cout<<(a >= 0 ? "positive" : "negative")<<endl;
//   return 0;
// }

// ********************************Loops*******************
// while loop
// practice printing numbers from 1 to 10:
// #include <iostream>
// using namespace std;
// int main(){
//       int n = 10;
//       int i = 1 ;
//       while (i<=10)
//       {
//         cout<<i<<endl;
//         i++;
//       }
//       return 0;
// }

// Problem printing a line 100 times:
// #include <iostream>
// using namespace std;
// int main(){
//       int i=1;
//       while (i<=100)
//       {
//         cout<<"i am a programmer"<<endl;
//         i++;
//       }
//       return 0;
// }

// For Loop
// sum of numbers from 1 to 10:
// #include <iostream>
// using namespace std;
// int main(){
//       int n = 10;
//       int sum = 0;
//       for(int i=1; i<=n; i++)
//       {
//         sum+=i;
//       }
//       cout<<"the sum of first 10 numbers is\n"<<sum<<endl;
//       return 0;
// }

// applying in while loop:
#include <iostream>
using namespace std;
int main(){
  int i = 1;
  int sum = 0;
  while (i<=10)
  {
    sum+=i;
    i++;
  }
  cout<<"the sum of first 10 numbers is:"<<sum<<endl;
  return 0;
}

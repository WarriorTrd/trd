#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
    // for (int i = 1; i <= 10; i++) {
    //     cout<<i<<"\n";
    // }

    // cout<<"enter the number N to print first N number in o row:"<<endl;
    // int N;
    // cin>>N;
    // for(int i=1;i<=N;i++) {
    //     cout<<i<<"\n";
    // }

    // int n=0;
    // for (int i = 1; i <= 10; i++) {
    //
    //     n=n+i;
    //
    //
    // }
    // cout <<"sum is" <<n << endl;

    // int n=0,N;
    // cout<<"Enter the number N: ";
    // cin>>N;
    //
    // for (int i = 1; i <= N; i++) {
    //
    //     n=n+i;
    //
    //
    // }
    // cout <<"sum is" <<n << endl;


    // int n=0,N,average;
    //    // cout<<"Enter the number N: ";
    //    // cin>>N;
    //    //
    //    // for (int i = 1; i <= N; i++) {
    //    //
    //    //     n=n+i;
    //    //
    //    //
    //    // }
    //    // average=n/N;
    //    // cout <<"average is" <<average<< endl;



    // for (int i = 1; i <= 10; i++) {
    //     if (i % 2 != 0) {
    //         cout<<i<<"\n";
    //     }
    // }

    // for (int i = 1; i <= 10; i++) {
    //     if (i % 2 == 0) {
    //         cout<<i<<"\n";
    //     }
    // }

    // cout<<"enter the number N to print odd numbers in o row:"<<endl;
    // int N;
    // cin>>N;
    // for(int i=1;i<=N;i++) {
    //     if (i%2!=0) {
    //         cout<<i<<" ";
    //     }
    //
    // }

    // cout<<"enter the number N to print even numbers in o row:"<<endl;
    // int N;
    // cin>>N;
    // for(int i=1;i<=N;i++) {
    //     if (i%2==0) {
    //         cout<<i<<" ";
    //     }
    //
    // }

    // for (int i = 1; i <= 100; i++) {
    //     if (i % 10 == 0) {
    //         cout<<i<<"\n";
    //     }
    // }

    // cout<<"enter the number N to print numbers diviseble by 10  in this range:"<<endl;
    // int N;
    // cin>>N;
    // for(int i=1;i<=N;i++) {
    //     if (i%10==0) {
    //         cout<<i<<" ";
    //     }

    //}



    // char a;
    // int count=0;
    // for (a='A';a<='Z';a++) {
    //     cout<<a;
    //     count+=1;
    //     if (count%5==0) {
    //         cout<<endl;
    //     }
    // }

    // int n,factorial=1;
    // cout << "Enter a number to calculate it's factorial: ";
    // cin >> n;
    // if (n >=1) {
    //     for (int i = 1; i <= n; i++) {
    //         factorial = factorial*i;
    //     }
    //     cout << "factorial of your number is"<<factorial << endl;
    // }
    //
    //
    // else {
    //     cout<<"negative numbers dont have factorial";
    // }


    // int num_classes;
    //     double total_points = 0, total_credits = 0;
    //
    //     cout << "Enter number of classes: ";
    //     cin >> num_classes;
    //
    //     for (int j = 0; j < num_classes; j++) {
    //         int num_credits, mark;
    //
    //         cout << "Enter number of credits: ";
    //         cin >> num_credits;
    //
    //         cout << "Enter total mark from this class: ";
    //         cin >> mark;
    //
    //         total_points += mark * num_credits;
    //         total_credits += num_credits;
    //     }
    //
    //     cout << "Your total GPA: " << (total_points / total_credits) << endl;



    // int num_students, num_classes, num_credits;
    // double total_points, total_credits, GPA, total_GPA = 0;
    //
    // cout << "Enter number of students: ";
    // cin >> num_students;
    //
    // for (int i = 0; i < num_students; i++) {
    //     total_points = 0;
    //     total_credits = 0;
    //
    //     cout << "Enter number of classes: ";
    //     cin >> num_classes;
    //
    //     for (int j = 0; j < num_classes; j++) {
    //         int mark;
    //         cout << "Enter number of credits: ";
    //         cin >> num_credits;
    //         cout << "Enter total mark from this class: ";
    //         cin >> mark;
    //
    //         total_points += mark * num_credits;
    //         total_credits += num_credits;
    //     }
    //
    //     if (total_credits > 0) {
    //         GPA = total_points / total_credits;
    //     } else {
    //         GPA = 0;
    //     }
    //
    //     total_GPA += GPA;
    //
    //     cout << "Student " << i + 1 << " GPA: " << GPA << endl;
    // }
    //
    //
    // if (num_students > 0) {
    //     cout << "Average GPA for this class is: " << total_GPA / num_students << endl;
    // } else {
    //     cout << "No students to calculate average GPA." << endl;
    // }



        // int n;
        // cout << "Enter the size of the square: ";
        // cin >> n;
        //
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         cout << "*";
        //     }
        //     cout << endl;
        // }

    //
    // int n;
    // cout << "Enter the length of the triangle: ";
    // cin >> n;
    //
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j <= i; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // int number, counter = 0;
    // cout << "Enter a number: ";
    // cin >> number;
    //
    // for (int i = 1; i <= number; i++) {
    //     if (number % i == 0) {
    //         counter++;
    //     }
    // }
    //
    // if (counter == 2) {
    //     cout << "Number is prime" << endl;
    // } else {
    //     cout << "Number is not prime" << endl;
    // }

    //
    // int number,kv,sum=0;
    // cout << "Enter a number: ";
    // cin >> number;
    // for (int i = 1; i <= number; i++) {
    //    kv= i*i;
    //     sum = sum + kv;
    // }
    // cout << "The sum of the given seies is: " << sum << endl;
    //


    // int num,pos=0,neg=0;
    // double sum=0;
    // cout<<"Enter your numbers,and enter zero to stop:"<<endl;
    // cin>>num;
    // while(num!=0) {
    //     if (num<0)
    //     neg+=1;
    //     else if(num>0) {
    //         pos+=1;
    //     }
    //     else {
    //
    //     }
    //     sum+=num;
    //   cout<<endl<<"Enter numbers,and enter zero to stop:"<<endl;
    //     cin>>num;
    //
    //
    // }
    // cout<<"there are "<<pos<<" positive nums"<<endl;
    // cout<<"and "<<neg<<" negative nums"<<endl;
    // cout<<"sum is :"<<sum<<endl;
    // cout<<"average is:"<<(double)sum/(pos+neg);


    // int n, reversed = 0;
    //
    // cout << "Enter a number: ";
    // cin >> n;
    //
    // while (n > 0) {
    //     int digit = n % 10;
    //     reversed = reversed * 10 + digit;
    //     n /= 10;
    // }
    //
    // cout << "Reversed number: " << reversed << endl;


    // int n;
    // cout << "Enter the depth: ";
    // cin >> n;
    //
    // if (n == 0) {
    //     cout << "The depth is 0" << endl;
    // } else {
    //     for (int i = 1; i <= n; i++) {
    //         for (int j = 1; j <= i; j++) {
    //             cout << i;
    //         }
    //         cout << endl;
    //     }
    // }


    // problem 14 - i coulnt solve









































        return 0;
    }

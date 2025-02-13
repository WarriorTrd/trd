#include <iostream>
#include <iomanip>
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
int num_students,total_mark,num_classes,num_credits,GPA;
    cout<<"Enter number of students: ";
    cin>>num_students;
    for(int i=0;i<num_students;i++) {
        cout<<"Enter number of clases: ";
        cin>>num_classes;
        for (int j=0;j<num_classes;j++) {
            cout<<"Enter number of credits: ";
            cin>>num_credits;
            cout<<"Enter total mark from this class: ";
            cin>>total_mark;
            total_mark+=total_mark;
        }






    }
    cout<<"total gpa for this class is"<<(GPA=(total_mark*=num_credits)/num_classes);


































    return 0;
}
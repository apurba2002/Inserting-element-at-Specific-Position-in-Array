#include<iostream>
using namespace std;
int main()
{
    int arr[60] = {2,5,7,9,8,5,3};
    cout<<"Before adding item.";
   for (size_t i = 0; i <=7 ; i++)
    {
        
        cout<< arr[i];
        getchar();
    }
    int pos,num;
    cout<< "Enter the position where you want to add :";
    cin>>pos;
    cout<<"Enter the number:";
    cin>>num;
    for (size_t i=6; i>=pos; i--)
    {
        arr[i+1]=arr[i];
        

    }
    arr[pos]=num;
    cout<<"After adding item.\n";
    for (size_t i=0; i<=7; i++)
    {
        cout<<"\n";
        cout<< arr[i];
        
        getchar();
    }

    

    

}
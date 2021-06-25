#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    system("cls");
    int counter = 0;
    int arr[5] = {1,2,3,4,5};
    int arr1[5] = {423,12,34,13,43};
    for(int i = 0; i < 5; i++)
    {
        for(int j =0 ; j < 5; j++)
        {
            if(arr[i] == arr1[j])
            {
                counter++;
            }
        }
    }
    if(counter != 0)
    cout << "The number of similar number is the arrays are : " << counter;
    else
    cout << "No similar numbers";
    return 0;
}
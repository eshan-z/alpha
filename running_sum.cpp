#include <iostream>
#include <bits/stdc++.h> 
using namespace std ; 

int main(){
    int n; 
    cin>> n; 
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int sum = 0 ;
    for (size_t i = 0; i < n; i++)
    {
        sum+= arr[i];
        cout<<sum<<" ";
    }
    
    
return 0 ; }
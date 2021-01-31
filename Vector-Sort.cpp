#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    vector<int>v; //Initializing the vector
    int a; // This is to take the input
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a); //Here we are taking or pushing all the values of a->vector
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" "; //As we all know VECTOR IS A DYNAMIC ARRAY, hence we are printing the values in an array form, that means 'v[i]' is describing everything.
    }
    
      
    return 0;
}

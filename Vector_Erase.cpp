#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i=0;
    //Taking the size of the array
    cin>>n;
    //Declaring the vector along with its size
    vector<int> v(n);
    while(n--)
    {
        cin>>v[i++]; //Here taking the array elements
    }
    
    //Now main algorithm
    int p,s,e;
    cin >> p;
    v.erase(v.begin()+ p-1); //This is for the first erasing stuff
    cin>> s >> e;
    v.erase(v.begin()+s-1, v.begin()+e-1); //This is for the 2nd erasing stuffs
    i=0; //for printing purpose, we are rewriting its index as 0
    cout<<v.size()<<endl;
    //Now printing , condition -> if the array is not empty.
    while(v.size()!=i)
    {
        cout<<v[i++]<<" ";
    }
    return 0;
}

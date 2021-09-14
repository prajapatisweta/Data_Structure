#include<iostream>
using namespace std;

int main()
{
    int a[]={1,3,5,8,9};
    int b[]={11,22,33,44};
    int s1,s2,s3;
    s1=5;s2=4;s3=s1+s2;
    int c[s3];
    
    for(int i=0;i<s1;i++)
    {
        c[i]=a[i];
    }
    for(int i=s1,j=0;i<s3,j<s2;i++,j++)
    {
        c[i]=b[j];
        
    }
    
    for(int i=0;i<s3;i++)
    {
        cout<<c[i]<<endl;
    }
    
}

    // Create an array arr3[] of size n1 + n2.
    // Copy all n1 elements of arr1[] to arr3[]
    // Traverse arr2[] and one by one insert elements (like insertion sort) of arr3[] to arr1[]. This step take O(n1 * n2) time.
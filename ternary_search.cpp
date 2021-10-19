#include<iostream>
using namespace std; 
  
int ternary_search(int arr[], int l, int r, int key) 
{ 
    if (l<=r) 
    { 
      /* calculating m1 and m2 */
        int m1 = l + (r - l) / 3; 
        int m2 = r - (r - l) / 3; 
  
        /* Check if the key is present at m1 or m2 index */
        if (arr[m1]==key)  
        { 
            return m1; 
        }
     
        if (arr[m2]==key) 
        { 
            return m2; 
        } 
  
        if (key < arr[m1])  
        { 
  
            /* search key in between l and m1-1 index */
            return ternary_search(arr, l, m1 - 1, key); 
        } 
        else if (key > arr[m2])  
        { 
  
            /* search key in between m2+1 and r index */
            return ternary_search(arr, m2 + 1, r, key); 
        } 
        else
        { 
  
            /* search key in between m1+1 and m2-1 index */
            return ternary_search(arr, m1 + 1, m2 - 1, key); 
        } 
    } 
  
    /* if the key is not present in the array */
    return -1; 
} 
  
int main() 
{ 
  int n, i, key, res;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    
    /* declaring arr of n size */
    int arr[n];
    
    /* Enter elements in sorted(ascending) order */
    cout<<"Enter elements: ";
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
  }
    
    cout<<"\nEnter element to search: ";
  cin>>key;
  
    res=ternary_search(arr, 0, n-1, key); 
  
  if(res==-1)
    cout<<"\nElement doesn't exist..!!";
  else
    cout<<"\nElement is present at index "<<res;
    
  return 0;
}

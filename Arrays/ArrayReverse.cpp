// This program displays the array in reverse order without actually storing the reversed values in the array.

#include<iostream>
using namespace std;
int main()
{
  int size=0,i=0;
  cout<<"Enter size of the Array ";
  cin>>size;
  if(size==0)
  cout<<"Array is empty!";
  else{
    int array[size];
    cout<<"Input values in the Array\n";
    for(i=0;i<size;i++)
    {
      cin>>array[i];
    }
    cout<<"The reversed Array is\n";
    for(i=size-1;i>=0;i--) // i starts from the last element and iterates to the first
    {
      cout<<array[i]<<"\n";
    }
  }
    return 0;
}

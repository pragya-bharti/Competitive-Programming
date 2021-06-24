// This program using a second array to store the reversed values.

#include<iostream>
using namespace std;
int main()
{
  int size=0;
  cout<<"Enter size of the Array\n";
  cin>>size;
  if(size==0)
  cout<<"Array is Empty!";
  else{
    int array[size], revarray[size];
    int i=0,j=size;
    cout<<"Enter the array to be reversed: \n";
    for(i=0;  i<size; i++) //simultaneously stores in proper order in array and in reverse order in revarray
     {
       cin>>array[i];
       revarray[(size-1)-i]=array[i];
     }
    cout<<"The entered array is: \n";
    for(i=0;i<size;i++)
    {
      cout<<array[i]<<"\n";
    }
    cout<<"The reversed array is: \n";
    for(i=0;i<size;i++)
    {
      cout<<revarray[i]<<"\n";
    }
  }
  return 0;
}

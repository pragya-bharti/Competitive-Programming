// Reversing an Array with the help of a recursive function call
//check where the garbage value is coming from.
#include<iostream>
using namespace std;

void reversearray(int array[], int first, int last)
{
  if(first>=last)
  return;
  int temp=0;
  temp = array[first];
  array[first]=array[last];
  array[last]=temp;
  reversearray(array, first+1, last -1); //recursive function call
}

int main()
{
  int size=0;
  cout<<"Enter size of the Array";
  cin>>size;
  if(size==0)
  cout<<"Array is empty!";
  else
  {   int array[size];
      cout<<"enter elements into the array \n";
      int i=0;
      for(i=0;i<size;i++)
       {
         cin>>array[i];
       }
       reversearray(array, 0 , size-1);
       cout<<"Reversed array is: \n";
       int j=0;
       for(j=0;j<size;j++)
       {
       cout<<array[j]<<"\n";
       }
  }
  return 0;
}

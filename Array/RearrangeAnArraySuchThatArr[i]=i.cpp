/*Given an array of elements of length N, ranging from 0 to N � 1. 
All elements may not be present in the array. If element is not 
present then there will be -1 present in the array. Rearrange the 
array such that A[i] = i and if i is not present, display -1 at 
that place.
Examples:
Input : arr = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1}
Output : [-1, 1, 2, 3, 4, -1, 6, -1, -1, 9]

Input : arr = {19, 7, 0, 3, 18, 15, 12, 6, 1, 8,
              11, 10, 9, 5, 13, 16, 2, 14, 17, 4}
Output : [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
         11, 12, 13, 14, 15, 16, 17, 18, 19]
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter length of array: ";
	cin>>n;
	cout<<"Enter the elements of array: ";
	int ar[n],m=n-1,br[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
		br[i]=ar[i];
	}
	for(int j=0;j<n;j++)
		for(int i=0;i<n;i++){
			if(j==ar[i]){
				br[j]=j;
				break;
			}
			else if(i==n-1){
				if(j!=ar[i])
					br[j]=-1;
			}
			
	}
	for(int i=0;i<n;i++)
		cout<<br[i]<<" ";
		
	return 0;
}

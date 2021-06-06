#include<iostream>
#include<math.h>
using namespace std;
int main(){
	//Given an array A (may contain duplicates) of N elements and a positive integer K.
	// The task is to count the number of elements which occurs exactly floor(N/K) times in the array.
 
	cout<<"Enter the size of array = ";
	int sizeof_array;
	cin>>sizeof_array;
	int arr[sizeof_array];
	int K;
	cout<<"Enter the value of K = ";
	cin>>K;
	cout<<"Enter the value in Array = ";
	for(int i=0;i<sizeof_array;i++){
		cin>>arr[i];
	}
    
    int f = floor(sizeof_array/K), count = 0;
    int temp_count=0;
    
    for(int i=0;i<sizeof_array;i++)
    {
        temp_count=1;
        for(int j=i+1;j<sizeof_array;j++)
        {
            if(arr[i]==arr[j])
            {
                temp_count++;
            }
            //cout<<" "<<temp_count;
        }
        if(temp_count == f)
        {
            count++;
        }
    }
	cout<<count<<endl;
	return 0;
	
}

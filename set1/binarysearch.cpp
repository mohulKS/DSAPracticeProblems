 #include<iostream>

using namespace std;

int BinarySearch(int*,int,int,int);

int main()

{

    int n,x,arr[100];

    cin>>n>>x;

    for(int i=0;i<n;i++)

        cin>>arr[i];

    int res = BinarySearch(arr,0,n-1,x);

    if(res==-1)

        cout<<"Element not found.";

    else

        cout<<"Element found at position : "<<res+1;

}



int BinarySearch(int arr[],int start,int last,int x)

{

    if(start<=last)

    {

        int mid = last + (start - last)/2;

        if(arr[mid]==x)

            return mid;

        else if(arr[mid]>x)

            return BinarySearch(arr,start,mid-1,x);

        else

            return BinarySearch(arr,start+1,last,x);

    }

    return -1;

}


//Program code for Mountain problem

#include<iostream>
#include<vector>

using namespace std;

int Highest_Mountain(vector<int> a)
{
    int n = a.size();

    int largest = 0;

    //For calculation of peak we are starting from 1st element because 0th element can't be the peak
    //Also we are running loop upto 2nd last element because last element can't also be the peak element
    for(int i=1; i<=n-2; )
    {
        //Check if a[i] is peak or not
        if(a[i] > a[i-1] && a[i] > a[i+1] )
        {
            int count = 1;
            int j = i;

            //count backwards (left)
            while(j>=1 && a[j] > a[j-1] )
            {
                count++;
                j--;
            }

            //count forwards (right)
            while(i<=n-2 && a[i] > a[i+1] )
            {
                count++;
                i++;
            }

            largest = max(largest, count);
        }

        else
        {
            i++;
        }
    }

    return largest;

}


int main()
{
    vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-1,4};

    cout<<Highest_Mountain(arr);

    return 0;
}

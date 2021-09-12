//Program Code for Rains problem

#include<iostream>
#include<vector>

using namespace std;

int TrappedWater(vector<int> heights)
{
    //Compute the size of heights vector
    int n = heights.size();

    //Create Left and Right Vectors for storing maximum of Left and Right Height values
    vector<int> left(n,0), right(n,0);

    left[0] = heights[0];
    right[n-1] = heights[n-1];

    for(int i=1; i<n; i++)
    {
        left[i] = max(left[i-1], heights[i]);
        right[n-i-1] = max(right[n-i], heights[n-i-1] );
    }

    //Computing the amount of water being stored
    int water = 0;

    for(int i=0; i<n; i++)
    {
        water += min(left[i], right[i]) - heights[i];
    }

    return water;

}


int main()
{
    vector<int> water = {0,1,0,2,1,0,1,3,2,1,2,1};

    cout<<TrappedWater(water)<<endl;

    return 0;
}

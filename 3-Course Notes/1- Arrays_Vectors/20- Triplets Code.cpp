//Program Code for Triplets problem

#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>

using namespace std;


vector<vector<int> > triplets(vector<int>arr, int targetSum)
{
    //First of Sort the given Array
    sort(arr.begin(), arr.end());

    vector<vector<int> > result;

    int n = arr.size();

    //Pick every a[i], pair sum for remaining part
    for(int i=0; i<n-3; i++)
    {
        int j = i+1;
        int k = n-1;

        //two pointer approach for calculating pair sum
        while(j<k)
        {
            int current_sum = arr[i];
            current_sum += arr[j];
            current_sum += arr[k];

            if(current_sum == targetSum)
            {
                result.push_back({arr[i], arr[j], arr[k] });
                j++;
                k--;
            }

            else if(current_sum > targetSum)
            {
                k--;
            }

            else
            {
                j++;
            }
        }

        return result;

    }

}


int main()
{
    vector<int> arr{1,2,3,4,5,6,7,8,9,15};

    int s = 18;

    auto result = triplets(arr, s);

    for( auto v: result)
    {
        for(auto no: v)
        {
            cout<<no<<",";
        }
        cout<<endl;
    }

    return 0;
}

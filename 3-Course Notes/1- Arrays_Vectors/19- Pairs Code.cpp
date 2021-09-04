//Program Code of pairs problem

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

vector<int> pairSum(vector<int> arr, int sum )
{
    unordered_set<int> set;
    vector<int> result;

    for(int i=0; i<arr.size(); i++)
    {
        int x = sum - arr[i];  //This is the value which we have to find in the set

        if(set.find(x) != set.end())   //It set.find(x) is not able to find x then it returns set.end()
        {
            result.push_back(arr[i]);
            result.push_back(x);

            return result;
        }

        //Insert the current array element into the set
        set.insert(arr[i]);
    }

    return {};
}

int main()
{
    vector<int> arr = {10,5,2,3,-6,9,11};

    int sum = 4;

    auto p = pairSum(arr, sum);

    if(p.size() == 0)
    {
        cout<<"No such pair!";
    }

    else
    {
        cout<<p[0]<<","<<p[1]<<endl;
    }

    return 0;
}

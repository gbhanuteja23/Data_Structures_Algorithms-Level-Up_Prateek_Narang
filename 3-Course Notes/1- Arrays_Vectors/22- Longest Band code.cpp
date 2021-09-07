//Program Code for Longest Band Problem

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int Largestband(vector<int> arr)
{
    int n = arr.size();

    unordered_set<int> s;

    //Insert data inside unordered_set
    for(int x: arr)
    {
        s.insert(x);
    }

    int largestLength = 1;    //largest length of band

    //Iterate over the set
    for(auto element: s)
    {
        int parent = element-1;

        //If we don't find the parent in set
        if(s.find(parent) == s.end())
        {
            //Find entire band starting from the element itself
            int next_no = element+1;
            int count = 1; //Since we are starting from element so it's the 1st one of band

            while(s.find(next_no) != s.end() )
            {
                next_no++;
                count++;
            }

            if(count > largestLength)
            {
                largestLength = count;
            }
        }
    }

    return largestLength;
}


int main()
{
    vector<int> arr{1,9,3,0,18,5,2,4,10,7,12,6};

    cout<< Largestband(arr);

    return 0;

}

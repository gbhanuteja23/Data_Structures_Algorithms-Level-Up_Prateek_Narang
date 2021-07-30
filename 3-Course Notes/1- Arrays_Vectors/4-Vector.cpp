#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> temp = {10,20,30,40};

    //Adding elements to the end of the Vector
    temp.push_back(50);

    //Finding size of a Vector
    cout<<temp.size()<<"\n\n";

    //Finding Capacity of List
    cout<<temp.capacity()<<endl;

    return 0;
}

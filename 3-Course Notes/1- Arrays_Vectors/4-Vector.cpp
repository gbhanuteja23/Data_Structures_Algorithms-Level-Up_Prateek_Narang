#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> temp = {10,20,30,40};

    //Adding elements to the end of the Vector
    temp.push_back(50);

    //Deleting elements from end of the Vector
    temp.pop_back();

    //Finding size of a Vector (No of elements)
    cout<<temp.size()<<"\n\n";

    //Finding Capacity of List (Memory allocated)
    cout<<temp.capacity()<<endl;

    cout<<"\n\n";
    //Print all elements of the Vector
    for(int i=0; i<temp.size(); i++)
    {
        cout<<temp[i]<<endl;
    }

    cout<<"\n\n";

    //Fill constructor - Used to initialize a vector elements with a similar value
    vector<int> temp2(10,5);

    for(int i=0; i<temp2.size(); i++)
    {
        cout<<temp2[i]<<" ";
    }

    cout<<"\n\n\n";

    /*----------------------------------------------------------------------------------*/

    //2D Vector
    vector< vector<int> > temp3 ={
    { 1,2,3},
    { 4,5,6},
    { 7,8,9,10},
    { 11,12}
    };


    cout<<"Printing 2D vector\n\n";

    for(int i=0; i<temp3.size(); i++)
    {
        for( int num: temp3[i] )
        {
            cout<<num<<" ";
        }

        cout<<endl;
    }

    /*----------------------------------------------------------------*/

    cout<<"\n\nAnother Way for Printing a 2D vector:\n\n";

    for(int i=0; i<temp3.size(); i++)
    {
        for(int j=0; j<temp3[i].size(); j++)
        {
            cout<<temp3[i][j]<<" ";
        }

        cout<<endl;

    }

    return 0;
}

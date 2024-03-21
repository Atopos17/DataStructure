#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
    vector<int> v={9,4,5,9,21};
    //v.push_back(1);
    //v.push_back(2);
    //v.push_back(3);
    //cout<<v.size()<<endl;
    //cout<<v.capacity()<<endl;
    for(int i=1;i<10;i++)
    {
        if(i<=5)
            v.push_back(i);
        else
            v.push_back(pow(i,2));
    }
    cout<<v.capacity()<<endl;
    v[1]=100;
    //for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    //{
    //    cout<<*it<<"\t";
    //}
    for(auto n:v)
    {
        cout<<n<<" ";
    }
}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(1);
   
    v.push_back(2);
   
    v.push_back(3);
    v.pop_back();
   
    cout<<v.at(1)<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
   
    vector <int> last(5,1);
    for(int i=0;i<last.size();i++)
    {
        cout<<last[i]<<endl;
    }

    

}
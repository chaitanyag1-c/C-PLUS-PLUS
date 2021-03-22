#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
int i,n;
int a[100];
int k;
vector<int> v1;
    cin>>n;
    for( i=1;i<=n;i++)
    {
        cin>>a[i];
        v1.push_back(a[i]);
    }
    v1.resize(7);
    cout<<v1.size();
    sort(v1.begin(),v1.end());
    for( i=0;i<=n;i++)
    {
        cout<<v1[i]<<endl;
    }
    cin>>k;
    cout<<v1[k-1];
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
bool mycmp(pair <int,int> a ,pair <int,int> b )
{
    return(a.second<b.second);

}
void maxact(pair<int,int> a,int  arr[],int n)
{
    sort(arr,arr+n,mycmp);
    int prev=0;
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i].first>=arr[prev].second)
        {
            res++;
            prev=i;
        }
    }
    return res;

}
int main()
{
    pair<int,int> arr[]={make_pair(1,2),make_pair(2,4),make_pair(3,6)};
    int n=3;
    int a=maxact(arr,n);
    cout<<a;

}
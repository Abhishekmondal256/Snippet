#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_updates> pbds;
// increasing
// typedef tree<int,null_type,greater<int>,rb_tree_tag,tree_order_statistics_node_updates> pbds;
//decreasing
// typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_updates> pbds;
//increasing with duplicate elements
int main(){
pbds A;// declaration
//insertion
A.insert(1);
A.insert(10);
A.insert(2);
A.insert(7);
A.insert(2);// ordered set contains only unique values

//A contains
for(auto it:A){
    cout<<it<<" ";
}
cout<<endl;

//finding kth element
cout<<"0th element"<<" "A.find_by_order(0)<<endl;
cout<<"1st element"<<" "A.find_by_order(1)<<endl;
cout<<"2nd element"<<" "A.find_by_order(2)<<endl;
cout<<"3rd element"<<" "A.find_by_order(3)<<endl;

//finding no. of elements smaller than x
cout<<"No. of elements smaller than 6 is"<<A.order_of_key(6)<<endl;
cout<<"No. of elements smaller than 11 is"<<A.order_of_key(11)<<endl;

//we can use lower bound 
//cout<<"Lower bound of 7" <<A.lower_bound(7);

//erase by key

A.erase(1);//erase 1 if present otherwise do nothing
    return 0;
}

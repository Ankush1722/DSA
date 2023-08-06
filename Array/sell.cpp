#include <iostream>
#include <vector>
#include <algorithm>
#include <map>  
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> bag(n);
    for (int i = 0; i < n; i++) {
        cin >> bag[i];
    }
    sort(bag.begin(), bag.end()); // sort the bag to make counting distinct IDs easier
     for (int i = 0; i < n; i++) {
        cout<<bag[i]<<" ";
    }
    cout<<endl;
    map <int,int> un;
    int distinct_ids = 1; // at least one ID will be left in the bag
    int i;
    int j=1;
    for (i = 1; i < n; i++) { // start from the second ID 
        if (bag[i] != bag[i-1]) { // if the current ID is different from the previous one
            int num_items = j; // count the number of items with the previous ID
            un[bag[i-1]]=num_items;
            distinct_ids++; // increment the count of distinct IDs
            j=1;
        }
        else{
            j++;
        }
    }
    un[bag[i-1]]=j;
    for( map<int,int>::iterator ii=un.begin(); ii!=un.end(); ++ii)  
    {  
       cout << (*ii).first << ": " << (*ii).second << endl;  
    } 
    cout <<"distinct"<< distinct_ids << endl;

    vector <int> min;
    for( auto ii=un.begin(); ii!=un.end(); ++ii)  
    {  
       min.push_back(ii->second);
    }
    sort(min.begin(),min.end());
    cout<<endl<<endl;
    for (auto x : min)
        cout << x << " ";
    
    i=0;
    while(m>0){
        m=m-min[i];
        if(m<0){
            break;
        }
        else if(m==0){
            distinct_ids--;
            break;
        }
        else{
        distinct_ids--;
        i++;
        }
    }
    cout <<"distinct"<< distinct_ids << endl;
    return 0;
}


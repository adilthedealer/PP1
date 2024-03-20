#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int countEquals(const vector<int>& a, const vector<int>& b) {
    int count = 0;
    
    vector<int> sortedA = a;
    vector<int> sortedB = b;
    sort(sortedA.begin(), sortedA.end());
    sort(sortedB.begin(), sortedB.end());
    
    int i = 0, j = 0;
    
    while (i < sortedA.size() && j < sortedB.size()) {
        if (sortedA[i] == sortedB[j]) {
            count++;
            i++;
            j++;
        } 
        else if (sortedA[i] < sortedB[j]) {
            i++;
        } 
        else {
            j++;
        }
    }
    return count;
}

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    for(int i=0; i<n;i++){
        cin>>b[i];
    }
    int equalsCount = countEquals(a, b);
    
    cout << equalsCount;
    
    return 0;
}
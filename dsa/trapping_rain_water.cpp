#include<bits/stdc++.h>
using namespace std;
int max_trap(vector<int>& a) {
        int l = 0, r = a.size() - 1;
        int result = 0;
        int left_max = 0, right_max = 0;
        while (l < r) {
            if (a[l] < a[r]) {
                a[l] >= left_max ? (left_max = a[l]) : result += (left_max - a[l]);
                l++;
            }
            else {
                a[r] >= right_max ? (right_max = a[r]) : result += (right_max - a[r]);
                r--;
            }
        }
        return result;
    }

int main(){
    vector<int> heights = {0,1,0,2,1,0,1,3,2,1,2,1};
    int res = max_trap(heights);
    cout<<"Max amount of  water it can trap after raining is : "<<res<<endl;
    return 0;
}
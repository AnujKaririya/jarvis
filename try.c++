#include<iostream>
#include<vector>
using namespace std;
int area(vector<vector<int>>LB,vector<vector<int>>TR){
    int n=LB.size();
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                //width
                int w=min(TR[i][0],TR[j][0])-max(LB[j][0],LB[i][0]);
                if(w<=0) continue;
                //height
                int h=min(TR[i][1],TR[j][1])-max(LB[j][1],LB[i][1]);
                if(h<=0) continue;
                int side=min(w,h);
                ans=max(ans,side*side);
            
        }
    }
    return ans;
}
int main(){
    vector<vector<int>>LB={{1,1},{3,3}};
    vector<vector<int>>TR={{2,2},{4,4}};
    cout<<area(LB,TR);
}
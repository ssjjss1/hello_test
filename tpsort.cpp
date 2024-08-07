#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int n,m;
int in[32001];
vector<int> v[32001];
int main(){
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  cin>>n>>m;
  for(int i=1,x,y;i<=m;i++){
    cin>>x>>y;
    v[x].push_back(y);
    in[y]+=1;
  }
  queue<int> q;
  for(int i=1;i<=n;i++) if(!in[i])q.push(i);
while(q.size()){
  int x=q.front();
  q.pop();
  cout<<x<<" ";
  for(auto i:v[x]) if(!--in[i]) q.push(i);
}
}

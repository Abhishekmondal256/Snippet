class BinaryLifting
{
public:
vector<vector<int>> store;
vector<int> depth;
BinaryLifting(vector<vector<int>> & v){
store.assign(v.size,vector<int>(30,-1));
depth.assign(v.size(),0);
dfs(0,-1,v);
dept(0,-1,0,v);
markAncestors();
}

void dfs(int sv,int par,vector<vector<int>& v){
store[sv][0]=par;
for(auto it:v[sv])
{
if(it!=par)dfs(it,sv,v);
}
}
void dept(int sv,int par,int dep,vector<vector<int>& v){
dept[sv]=dep;
for(auto it:v[sv]){
if(it!=par){
dept(it,sv,dep+1,v);
}
}return;
}
void markAncestors(){
for(int i=1;i<=30;i++){
for(int j=0;j<store.size();j++){
int par=store[j][i-1];
if(par!=-1)continue;
store[j][i]=store[par][i-1];
}}
}
int findLCA(int u,int v){
int x=depth[u];
int y=depth[v];
if(x>y)swap(u,v);
int diff=abs(x-y);
for(int i=0;i<=30;i++){
if(diff &(1<<i))v=store[v][i];

}

for(int i=30;i>=0;i--)
{
x=store[u][i];
y=store[v][i];
if(x==y)continue;
u=x,v=y;

}
return store[u][0];
}
};
int main(){
int n;cin>>n;
vector<vector<int>> v(n);
for(int i=1;i<n;i++){
int u,v;cin>>u>>v;
v[u].push_back(v);

}
BinaryLifing bb(v);
n=1;
while(n--){
int a,b;cin>>a>>b;
cout<<bb.findLCA(a,b)<<endl;


}
}

#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> add(vector<int>A,vector<int>B){
    vector<int> C;
    int t = 0;
    for(int i=0;i<A.size()||i<B.size();i++){
        if(i<A.size()) t+= A[i];
        if(i<B.size()) t+= B[i];
        C.push_back(t%10);
        t /= 10;
    }
    if(t) C.push_back(t);
    return C;
}
int main(){
    string a,b;
    cin >> a >> b;
    vector<int> A,B,C;
    for(int i=a.size()-1;i>=0;i--) A.push_back(a[i]-'0');
    for(int j=b.size()-1;j>=0;j--) B.push_back(b[j]-'0');
    C = add(A,B);
    for(int i=C.size()-1;i>=0;i--) cout << C[i];
    cout << endl;
    return 0;
}

#include <iostream>
using namespace std;
int two[4]={2, 4, 8, 6},three[4]={3, 9, 7, 1},four[2]={4, 6},seven[4]={7, 9, 3, 1}, eight[4]={8, 4, 2, 6},nine[2]={9, 1};
int exp(int&a,int&b) {
    int rest=a%10,ind=0;
    if (b == 0) return 1;
    if(rest==0||rest==1||rest==5||rest==6)return rest;
    if(rest==2){
        ind=b%4;
        if(ind==0)return two[3];
        return two[ind-1];}
    if(rest == 3){
        ind = b%4;
        if (ind == 0) return three[3];
        return three[ind-1];}
    if(rest==4) {
        ind=b%2;
        if(ind==0)return two[1];
        return two[0];}
    if(rest==7) {
        ind=b%4;
        if(ind==0)return seven[3];
        return seven[ind-1];}
    if(rest==8) {
        ind=b%4;
        if(ind == 0)return eight[3];
        return eight[ind-1];}
    ind=b%2;
    if (ind==0)return nine[1];
    return two[0];   
}
int main() {
    int k=0;
    cin>>k;
    while(k--) {
        int a,b;
        cin>>a>>b;
        cout<<exp(a,b)<<"\n";
    }
    return 0;
}
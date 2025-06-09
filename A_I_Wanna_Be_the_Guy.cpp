#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int,int> myArr;

    for(int i=1;i<=n;i++){
        myArr[i]=0;
    }

    int a;
    cin >> a;
    int tempA;
    for(int i=1;i<=a;i++){
        cin>>tempA;
        if(myArr[tempA] == 0){
            myArr[tempA]=1;
        }
    }

    int b;
    cin >> b;
    int tempB;
    for(int i=1;i<=b;i++){
        cin>>tempB;
        if(myArr[tempB] == 0){
            myArr[tempB]=1;
        }
    }

    for(int i=1;i<=n;i++){
        if(myArr[i] == 0){
            cout<< "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;
}
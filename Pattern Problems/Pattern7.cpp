#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int i, j;
    
    for(i = 1; i <= n; i++){
        for(j = n; j >= 1; j--){
            if(i >= j)
            cout << "* ";
            else
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
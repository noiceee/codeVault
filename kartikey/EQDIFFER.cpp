#include <iostream>
#include <unordered_map>

using namespace std;

int getAns(int* arr, int n){
    int maxOccur = 0;
    unordered_map<int, int>umap;
    for (int i=0; i<n; i++) {
        if(umap.find(arr[i]) == umap.end()){
            umap[arr[i]] = 1;
        } else {
            umap[arr[i]]++;
        }
    }
    for (auto i:umap) {
        if (i.second >= maxOccur){
            maxOccur = i.second;
        }
    }
    if (maxOccur == 1) {
        if(n < 2){
            return 0;
        }
        return (n - 2);
    }else if (maxOccur == 0){
        return maxOccur;
    }else {
        return (n - maxOccur);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int* arr = new int[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        cout << getAns(arr, n) << "\n";
    }
}
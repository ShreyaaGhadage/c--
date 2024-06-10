#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 2};
    for(int i = 0; i <= 5; i++){
        bool flag = true;
        for(int j = i + 1; j <= 5; j++){  // Declare 'j' properly
            if(arr[i] == arr[j]){
                cout << "Duplicate element found: " << arr[i] << endl;  // Use '<<' for cout
                flag = false;
                break;
            }
        }
        if(flag == false) break;
    }
    return 0;
}


#include "main.h"

int index_last_odd(int arr[], int len){
    int ans = -1;
    for(int i = 0; i < len; i++){
        if(arr[i]%2){
            ans = i;
        }
    }
    return ans;
}

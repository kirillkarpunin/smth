#include "index_first_even.h"

int index_first_even(int arr[], int len){
    for(int i = 0; i < len; i++){
        if(arr[i]%2 == 0){
            return i;
        }
    }
    return -1;
}

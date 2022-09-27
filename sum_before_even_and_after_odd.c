#include <stdlib.h>
#include "main.h"

int sum_before_even_and_after_odd(int arr[], int len){
    int beg = index_first_even(arr, len);
    int end = index_last_odd(arr, len);
    int sum = 0;
    for(int i = 0; i<len; i++){
        if (i < beg || i >= end){
            sum += abs(arr[i]);
        }
    }

    return sum;
}

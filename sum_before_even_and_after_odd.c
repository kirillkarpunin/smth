#include <stdlib.h>
#include "sum_before_even_and_after_odd.h"
#include "index_first_even.h"
#include "index_last_odd.h"

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

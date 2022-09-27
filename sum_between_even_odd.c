#include <stdlib.h>
#include "main.h"

int sum_between_even_odd(int arr[], int len){
    int beg = index_first_even(arr, len);
    int end = index_last_odd(arr, len);
    int sum = 0;
    for(int i = beg; i<end; i++){
        sum += abs(arr[i]);
    }

    return sum;
}

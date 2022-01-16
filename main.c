#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned int uint32;

void Swap(uint32 * a, uint32* b);
void SelectionSort(uint32 arr [],uint32 size);
void BubbleSort(uint32 arr[],uint32 size);

int main() {

    uint32 arr[]={9,4,1,7,4,2,10,14,4,3,2,1,0,5,90,123,190};
    uint32 a[]={9,4,1,7,4,2,10,14,4,3,2,1,0,5,90,123,190};
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i) {
        printf("%d ",arr[i]);
    }
    printf("\nsorted array: \n");
    SelectionSort(arr, sizeof(arr)/ sizeof(arr[0]));
    BubbleSort(a, sizeof(a)/ sizeof(a[0]));


    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); ++i) {
        printf("%d ",a[i]);
    }
    return 0;
}

void Swap(uint32* a,uint32* b)
{
    uint32 temp=*a;
    *a=*b;
    *b=temp;
}

void SelectionSort(uint32 arr[],uint32 size)
{
    for (int i = 0; i < size-1; ++i) {
        for (int j = i+1; j < size; ++j) {
            if(arr[i]>arr[j])
            {
                Swap(&arr[i],&arr[j]);
            }
        }
    }
}

void BubbleSort(uint32 arr[],uint32 size)
{
    for (int i = 0; i < size-1; ++i) {
        for (int j = 0; j < size-1-i; ++j) {
            if(arr[j]>arr[j+1])
            {
                Swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
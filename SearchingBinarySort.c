#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int key = 0;

void findValue(int arr[], int key){
int low = 0, high = SIZE - 1;
int mid = (low + high) / 2;
while (low <= high)
{
if (key == arr[mid])
{
    printf("%d is found at %d index\n", key, mid);
    break;
}
if (key < arr[mid])
{
    high = mid - 1;
    mid = (low + high) / 2;
}
if (key > arr[mid])
{
    low = mid + 1;
    high = SIZE - 1;
    mid = (low + high) / 2;
}
if (key != arr[mid])
{
    printf("Value not found\n");
    break;
}

}
}
void sort(int arr[]){
int temp;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {  
        if (arr[i] > arr[j])
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
        }
    }
    
}

int main(){
    int x;
    int arr[SIZE];
printf("Enter values you want to insert\n");
for (int i = 0; i <= SIZE - 1; i++)
{
    scanf("%d", &arr[i]);
}
sort(arr);
printf("Display\n");
for (int i = 0; i <= SIZE - 1; i++)
{
    printf("%d\n", arr[i]);
}
printf("Enter value you want to find\n");
scanf("%d", &key);
findValue(arr, key);

}



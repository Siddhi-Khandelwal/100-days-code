#include <stdio.h>
int main() {
int n;
scanf("%d", &n);
int arr[100];
for(int i=0; i<n; i++) scanf("%d", &arr[i]);
int key;
scanf("%d", &key);
int i = n-1;
while(i >= 0 && arr[i] > key){
arr[i+1] = arr[i];
i--;
}
arr[i+1] = key;
n++;
for(int k=0; k<n; k++){
printf("%d ", arr[k]);
}
return 0;
}

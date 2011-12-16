#include <stdio.h>

void sort(int arr[], int L, int R)
{
if (L >= R)
return;
int m = (L + R) /2;
int mediana = arr[m];
int LL = L;
int RR = R;
while (LL < RR) {
while (arr[LL] < mediana)
LL++;
while (arr[RR] > mediana)
RR--;
if (LL <= RR) {
int swap = arr[LL];
arr[LL] = arr[RR];
arr[RR] = swap;
LL++;
RR--;
}
}
if (LL<R)
sort (arr , LL , R);
if (RR > L)
sort (arr , L , RR);
}

int main() {
int arr[] =  { 17, 14, 21, 42, 19, 0, 8, 4, 1, 5 };
int ARR_LENGTH =  sizeof (arr) / sizeof (int);
sort (arr , 0 , ARR_LENGTH - 1);
int i;
for (i=0; i < ARR_LENGTH; i++) printf ("%d\n" , arr [i] );
}

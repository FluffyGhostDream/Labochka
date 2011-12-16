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

}


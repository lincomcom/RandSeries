/*check not repeated, repeated=1, else=0*/
int CheckRepted(int i, int series[],int temp){
int j;
for(j=0; j<i; j++){
    if(series[j]==temp)
    return 1;
}
return 0;
}
 /*create a series of random int*/
void PrintSeries(int n, int series[]){
int i;
for(i=0; i<n; i++){
    printf("%3i %i\n", i+1, series[i]);
    }
}

int * RandSerirs(int n){
int i;
int series[MAXn];
for(i=0; i<n; i++){
    int temp=rand();
     /*check not repeated, repeated=1, else=0*/
    while(CheckRepted(i, series, temp)){
        temp=rand();
    }
    series[i]=temp;
}
return series;
}

    /*output to file*/

int main()
{
    int i;
    for(i=1; i<=5; i++)
    {
        int n=pow(2,i);
        int *series=RandSerirs(n);
        PrintSeries(n, series);
        printf("-------------\n");
    }



    /*output to file*/

    return 0;

}

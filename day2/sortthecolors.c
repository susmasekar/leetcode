void sortColors(int* arr, int n){
int i,cz=0,co=0;
for(i=0;i<n;i++)
{
    if(arr[i]==0)
    ++cz;
    if(arr[i]==1)
    ++co;
}
for(i=0;i<cz;i++)
arr[i]=0;
for(i=cz;i<cz+co;i++)
arr[i]=1;
for(i=cz+co;i<n;i++)
arr[i]=2;
}

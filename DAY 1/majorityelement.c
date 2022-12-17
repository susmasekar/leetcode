int majorityElement(int* nums, int numsSize){
int x,count=0;
for(int i=0;i<numsSize;i++)
{
    x=nums[i];
    for(int j=0;j<numsSize;j++)
    {
        if(x=nums[j])
        ++count;
    }
    if(count>numsSize/2)
    return x;
}
return -1;
}

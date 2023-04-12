int rc(int arr[],int val[],int length, int n)
{
    if(length==0 || n==0)
    {
        return 0;
    }
    if(arr[n-1]>length)
    {
        return rc(arr,val,length,n-1);
    }
    else
    {
        return    max (  rc(arr,val,length,n-1)    ,   val[n-1]+rc(arr,val,length-val[n-1], n)  );
    }
}
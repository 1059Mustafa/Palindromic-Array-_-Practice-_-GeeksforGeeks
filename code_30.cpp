bool ispalindrom(int n)
{
    int num=0;
    int a=n;
    while(n!=0)
    {
        num=num*10+n%10;
        n=n/10;
    }
    return a==num;
    
}


int PalinArray(int a[], int n)
{  
    for(int i=0;i<n;i++)
    {
        if(!ispalindrom(a[i]))
        {
            return 0;
        }
    }
    return 1;
}

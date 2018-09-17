    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        scanf("%d",&n);
        long long int arr[n],s=-2,l=2,e;
        bool val=false;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n==1||n==2){printf("%d",n);return 0;}
        for(int i=2;i<n;i++)
        {
            if(arr[i-1]+arr[i-2]==arr[i]&&!val)
            {
                val=true;
                s+=i;
                e=i;
                l=max(l,abs(e-s+1));
            }
            else if(arr[i-1]+arr[i-2]==arr[i]&&val)
            {
                e=i;
                l=max(l,abs(e-s+1));
            }
            else
            {
               s=-2;
               val=false;
            }
        }
        cout<<l;return 0;
    }

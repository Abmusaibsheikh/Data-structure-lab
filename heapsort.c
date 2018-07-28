#include<stdio.h>

void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);

int main()
{
    int a[30],n,i;
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter array elements:");
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    mergesort(a,0,n-1);
    
    printf("\nSorted array is :");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
    return 0;
}

void mergesort(int a[],int i,int j)
{
    int mid;
    
    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(a,i,mid);        //left recursion
        mergesort(a,mid+1,j);    //right recursion
        merge(a,i,mid,mid+1,j);    //merging of two sorted sub-arrays
    }
}

void merge(int a[],int i1,int j1,int i2,int j2)
{
    int temp[50];    //array used for merging
    int i,j,k;
    i=i1;    //beginning of the first list
    j=i2;    //beginning of the second list
    k=0;
    
    while(i<=j1 && j<=j2)    //while elements in both lists
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    
    while(i<=j1)    //copy remaining elements of the first list
        temp[k++]=a[i++];
    
    while(j<=j2)    //copy remaining elements of the second list
        temp[k++]=a[j++];
    
    //Transfer elements from temp[] back to a[]
    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];
}
p->data, k);
            
            if(front[dig] == NULL)
                front[dig] = p ;
            else
                rear[dig]->next = p;
            rear[dig] = p;
        }
        
        count=0;
        while(front[count] == NULL)
            count++;
        start = front[count];
        while(count<9)
        {
            if(rear[count+1]!=NULL)
                rear[count]->next=front[count+1];
            else
                rear[count+1]=rear[count];
            count++;
        }
        rear[9]->next=NULL;
    }
}

int larger_dig()
{
    struct node *p=start;
    int large=0,ndigit=0;
    
    while(p != NULL)
    {
        if(p ->data > large)
            large = p->data;
        p = p->next ;
    }
    
    while(large != 0)
    {
        ndigit++;
        large = large/10 ;
    }
    return(ndigit);
}

int digit(int num, int k)
{
    int digit, count ;
    for(count=1; count<=k; count++)
    {
        digit = num % 10 ;
        num = num /10 ;
    }
    return(digit);
}

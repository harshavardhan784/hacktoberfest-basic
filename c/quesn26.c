#include<stdio.h>
		
int main()
		
{
		
  int n,i,j,k;
				
  printf("\n Enter size of the array \n");		
  scanf("%d",&n);
				
  int a[n],max[n];
				
  printf("\n Enter elements of the array \n");		
  for(i=0;i<n;i++)		
  scanf("%d",&a[i]);
				
  printf("\n Enter size of sub array \n");		
  scanf("%d",&k);
				
  for(i=0;i<n;i++)
		
  {		
    max[i]=a[i];		
   for(j=i;j<i+k;j++)		
   {		
    if(max[i]<a[j])		
    max[i]=a[j];		
   }
		
  }
				
  printf("\n Maximum in each and every subarray of size %d are \n",k);		
  for(i=0;i<n-k+1;i++)		
  printf("%d\n",max[i]);
			
  return (0);
		
}
	


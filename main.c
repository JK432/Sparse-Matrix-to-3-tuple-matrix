#include<stdio.h>
#include<stdlib.h>
int main(){

  int mat1[10][10],row,col;
  scanf("%d",&col);
   scanf("%d",&row);

int i,j,count=0,sprt[10][10],arr[103],k=0;
  
  for(i=0;i<row;i++)
  {for(j=0;j<col;j++)
    {
      
    scanf("%d",&mat1[i][j]);
    
    }}
for(i=0;i<row;i++)
  for(j=0;j<col;j++)
{if(mat1[i][j]==0){
      count=count+1;
      
    }}

if(count>(row*col/2)){
  printf("Sparse matrix!");
  printf("\n%d Tuple Matrix\n",(row*col)-count);
  for(i=0;i<row;i++)
{  for(j=0;j<col;j++)
    {
    
    if(mat1[i][j]!=0){
     arr[k]=i;
     
     arr[k+1]=j;
    
     arr[k+2]=mat1[i][j];
     
     k=k+3;
    }
    }
}


sprt[0][0]=((row*col)-count);
sprt[0][1]=3;
sprt[0][2]=((row*col)-count);
k=0;
for(i=1;i<((row*col)-count+1);i++)
  for(j=0;j<3;j++)
    {
    
      sprt[i][j]=arr[k];
      k=k+1;

   
    }
for(i=0;i<((row*col)-count+1);i++)
  {for(j=0;j<3;j++)
    {
    
    printf("%d ",sprt[i][j]);
    

     
    }
    printf("\n");}
}
else{
  printf("Dense Matrix!");
}


   return 0;


}
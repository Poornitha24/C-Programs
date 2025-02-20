#include<stdio.h>
#include<stdlib.h>
void count_votes(int votes[],int n,int candidate_votes[])
{                     //{ 4 3 1 1 1}
    for(int i=0;i<n;i++)
    {
        candidate_votes[votes[i]-1]++;
    }
    
}
int find_winner(int candidate_votes[])
{
    int max_index=0,n;
    for(int i=0;i<5;i++)
    {
        if(candidate_votes[i]>candidate_votes[max_index])
        {
           max_index=i; 
        }
    }
    return max_index+1;
}
void readvotes(int votes[],int n)
{
    printf("Enter votes(1.Ashwin 2.Anil 3.Kavya 4.Shakila 5.Punya): ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&votes[i]);
    }
}
int main()
{
    int i,n;
    printf("Enter the number of vote:");
    scanf("%d",&n);
    int* votes=NULL;//not a wild pointer//votes[1000]={1,2,3,4,2,2,3,5,4,2}
    votes=(int*)malloc(sizeof(int)*n);
    readvotes(votes,n);
    int* candidate_votes=NULL;
    candidate_votes=(int*)calloc(5,sizeof(int));
    count_votes(votes,n,candidate_votes);
    for(int i=0;i<5;i++)
    {
        printf("Candidate %d: %d votes\n",i+1,candidate_votes[i]);
    }
    printf("Winner is Candidate %d",find_winner(candidate_votes));
    free(votes);//dangling pointer
    votes=NULL;//no dangling
    //printf("%d\n",votes[0]);//unde
    return 0;
}

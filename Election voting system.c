#include <stdio.h>
struct vote
{ 
	char name[50];
	int voterid[3];
}id;
int main() 
{
	
    int x_votes = 0;
    int y_votes = 0;
    int z_votes = 0;
    int total_votes = 0;
    int vote;

    printf("----------------------------------Welcome to the Election Program!-----------------------------------\n");

    while (1) {
    	fflush(stdin);
    	printf("\n enter name:");
    	scanf("%c",id.name);
    	fflush(stdin);
    	printf("enter id:");
    	scanf("%d",id.voterid);
    	fflush(stdin);
    	printf("---------------------------------------------------------------------------------------------------");
        printf(" \n 1 for x \n 2 for y \n 3 for z \n 0 to exit \n Enter your vote: ");
        scanf("%d", &vote);
        printf("---------------------------------------------------------------------------------------------------");
        if (vote == 0) 
		{
            break;
        } 
		else if (vote == 1)
		{
            x_votes++;
        } 
		else if (vote == 2) 
		{
            y_votes++;
        }
		else if (vote == 3)
		{
            z_votes++;
        } 
		 
		else 
		{
            printf("Invalid vote! Please try again.\n");
            continue;
        }

        total_votes++;
    }

    printf("\n Election Results:\n");
    printf("x received %d votes.\n", x_votes);
    printf("y received %d votes.\n", y_votes);
    printf("z received %d votes.\n", z_votes);
    printf("Total votes cast: %d\n", total_votes);
    
     if(x_votes == y_votes &&x_votes == z_votes && y_votes==z_votes)
    {
		 printf("------------********-------*****-it is tie-*****--------********------------\n");
    }
    else if (x_votes > y_votes) 
	
    {  if(x_votes>z_votes)
    
        printf("------------********-------*****-x wins the election!-*****--------********------------\n");
     else   
        printf("------------********-------*****-y wins the election!-*****--------********------------\n");
    } 
	else if (y_votes > x_votes)
	{
		if(y_votes>z_votes)
        printf("------------********-------*****-inc wins the election!-*****--------********------------\n");
        else
        printf("------------********------------aap wins the election!------------********------------\n");
    }
    
	
    return 0;
}



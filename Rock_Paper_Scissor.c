#include<stdio.h>
main()
{
	int R=1,P=2,S=3,computer;
	int i,Pscore=0,Sscore=0,choice;
	printf("Rock=1 , Paper= 2, and Scissors= 3\n");
	for(i=0;i<5;i++)
	{
		printf("Enter your choice:");
		scanf("%d",&choice);
		 int computer=rand()%3+1;
		   if (choice==1)
		   {
		   	if(computer==1)
		   	 {
		   	 	printf("Choice is Scisoors \n ");
		   		printf("equal\n");
			 }
			 if(computer==2)
			 {
			 	printf("Choice is Scisoors \n ");
			 	printf("Computer win! \n");
			 	Pscore=Pscore+1;
			 }
			 if(computer==3)
			 {
			 	printf("Choice is Scisoors \n ");
			 	printf("Player Win \n");
			 	Sscore=Sscore+1;
			 	
			 }
			 
		   }
		   else 
		   if(choice==2)
		   
		   {
		   	if(computer==2)
		   	  {
		   	  	printf("Draw\n");
			  }
			  if(computer==3)
			  {
			  	printf("Computer win \n");
			  	Pscore=Pscore+1;
			  }
			  if(computer==1)
			  {
			  	printf("Player win \n");
			  	Sscore=Sscore+1;
			  }
		   	
		   }
		   else
		   if(choice==3)
		   {
		   	if(computer==3)
		   	 {
		   	 	printf("equal\n");
			 }
			 if(computer==2)
			 {
			 	printf("computer win \n");
			 	Pscore=Pscore+1;
			 }
			 if(computer==1)
			 {
			 	printf("player win \n");
			 	Sscore=Sscore+1;
			 }
		   }
		   else
		   {
		   	printf("Wrong answer \n");
		   }
		
	}
	if (Sscore > Pscore )
	{
		printf("Computer wins %d to %d\n",Sscore,Pscore);
	}
	 else 
	 if(Sscore < Pscore )
	 {
	 	printf("Player wins %d to %d\n",Pscore,Sscore);
	 }
	 else if(Sscore = Pscore )
	 {
        printf("No winner it is a equal!\n");
     }
     return 0;
	
}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<process.h>

void Welcome();
void Login();
void menu();
void loading();
void loadingdisplay(int x, int y);
void InsertMovie();
void ViewMovie();
void EditMovie();
void ViewTransactions();
void LogOut();
void BookTicket();


struct system
{
	char code[20];
	char movie[20];
	char showtime[20];
	int tickets;
	int cost;
}ab,ticket;

int main()
{	
	Welcome();
	
	Login();
	
	menu();
	
}

void Welcome ()
{
	system("color 7");
	
		int i=0,j=0,b;
	
	printf("\n\n\n\n\n\n");
	
	printf("\t\t\t\t");
	for(i=1;i<50;i++){
		printf("*");
	}
	
	printf("\n");
	
	for(i=1;i<10;i++){
		
		printf("\t\t\t\t");
		printf("*");
		
		for(j=1;j<48;j++){
			
			printf(" ");
			if(i==5){
			j=48;
			printf("\t    Silver Screen Informatics           ");
		}
		}
		printf("*\n");
	}
	printf("\t\t\t\t");
	for(i=1;i<50;i++){
		printf("*");
	}
	
	printf("\n\n\t\t\t\t\t    Press any key to continue:");
	getch();
	system ("cls");
}

void Login ()
{
	system("color 6");
	int a=0,i=0,j;
    char username[10],c=' '; 
    char password[10],code[10];
    char user[10]="admin";
    char pass[10]="pass";
    
    do
    {
    	printf("\n\n\t\t\t     *********************** LOGIN PAGE ***********************");
    
		printf("\n\n\t\t\t	USERNAME : ");
    	scanf("%s",&username);
    	
    	
    	printf("\n\n\t\t\t	PASSWORD : ");
    	
    	while (i<10)
    	{
    		password[i] = getch();
    		c = password[i];
    		
    		if (c == 13)
    		{
    			break;
			}
			
			else 
			{
				printf("*");
			}
			
			i++;
		}
    	
    	password[i]='\0';
    	
    	i=0;
    	
    	if(strcmp(username,"admin")==0 && strcmp(password,"pass")==0)
    	{
    		int i=0,j=0,b;
    		
			system("cls");
			system("color 7");
			printf("\n\nPassword Match!");
			
			loading();
			
			printf("\n\n\n\n\n\n");
	
			printf("\t\t\t\t");
			for(i=1;i<50;i++)
			{
				printf("*");
			}
	
	
			printf("\n");
	
			for(i=1;i<10;i++)
			{
				printf("\t\t\t\t");
				printf("*");
		
			for(j=1;j<48;j++)
			{
				printf(" ");
			
				if(i==5)
				{
					j=48;
					printf("\t        LOGIN SUCCESSFUL	                ");
					printf("\n\t\t\t\t\tWELCOME TO THE MANAGMENT SYSTEM 	");
				}		
			}
			printf("*\n");
			}
			
			printf("\t\t\t\t");
			
			for(i=1;i<50;i++)
			{
				
				printf("*");
			}
	
		printf("\n\n\t\t\t\t\t    Press any key to continue:");
		getch();
		system ("cls");
    	break;
		}
		
		else 
		{
			printf("\n\n\t\t\t\t\t Invalid Username OR Password");
			printf("\n\t\t\t\t\t     You Have %d Tries Left",4-a);
			printf("\n\t\t\t\t\t Press any key to try again");
			a++;
			getch();
			system("cls");
		}
    	
	}while (a<=4);
	
	if (a>4)
	{
		system("color 7");
			printf("\n\n\n\n\n\n");
	
			printf("\t\t\t\t");
			for(i=1;i<50;i++)
			{
				printf("*");
			}
	
	
			printf("\n");
	
			for(i=1;i<10;i++)
			{
				printf("\t\t\t\t");
				printf("*");
		
			for(j=1;j<48;j++)
			{
				printf(" ");
			
				if(i==5)
				{
					j=48;
					printf("\t        LOGIN UNSUCCESSFUL	        ");
				}		
			}
			printf("*\n");
			}
			
			printf("\t\t\t\t");
			
			for(i=1;i<50;i++)
			{
				
				printf("*");
			}
	
		printf("\n\n\t\t\t\t     Press any key to terminate the programm:");
		getch();
		system ("cls");
    	getch();
		exit(0);
		}
		system("cls");
}

void menu()
{
	int choice=0;
	
	
    system("color E5");
    printf("\n\n\t\t\t\t Silver Screen Informatics ");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t1.View Movie\n\t\t2.Insert Movie\n\t\t3.Edit Movie\n\t\t4.View Transactions\n\t\t5.Book Ticket\n\t\t6.Log Out\n\n\n\n\n\t\t Enter your choice: ");
    scanf("%d",&choice);
    
    switch (choice)
    {
    	case 1: ViewMovie();
    	break;
    	
    	case 2: InsertMovie();
    	break;
    	
    	case 3: EditMovie();
    	break;
    	
    	case 4: ViewTransactions();
    	break;
    	
    	case 5: BookTicket();
    	break;
    	
    	case 6: LogOut();
    	break;
    	    	
    	default: printf("Invalid Choice");
    	break;
	}
	system("cls");
}

void loading()
{
	int r,q;
	system("cls");
	loadingdisplay(50,15);
	printf("Loading, Please Wait....");
	loadingdisplay(10,18);
	
	for (r=1; r<=100; r++)
	{
		for (q=0; q<=9999995; q++);
		printf("%c",219);
	}
	system("cls");
}

void loadingdisplay(int x, int y)
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void InsertMovie()
{
	FILE *ptr;
	struct system ab;
	
	int capacity;
   	FILE *fcpt;
	fcpt=fopen("capacity.txt","r+");
   	fscanf(fcpt,"%d", &capacity);
   
   if(capacity==0)
   {
   	int cap=0;
   	printf("\n You cannot add more movie. Limit is exceeded\n Go to the edit movie section in main menu\n Press 1 to go to to main menu \n Press 2 to exit");
	scanf("%d", &cap);
	switch(cap)
	{
	
		case 1: menu();
		break;
	
		case 2: exit(0);
		break;	
   	}
	}
   else{
   capacity--;
	
	fseek( fcpt, -1, SEEK_CUR );
    fprintf(fcpt,"%d", capacity);
	fclose(fcpt); 
	
	printf("Enter The Movie Code : ");
	scanf("%s",&ab.code);
	
	printf("Enter Movie Name : ");
	scanf("%s",&ab.movie);
	
	printf("Enter The Showtime : ");
	scanf("%s",&ab.showtime);
	
	printf("Enter The Cost/Ticket : ");
	scanf("%d",&ab.cost);
	
	printf("Enter The Total Number of Seats: ");
	scanf("%d",&ab.tickets);
	
	ptr=fopen("movies.txt","a");
	
	if (ptr == NULL)
	{
		printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ERROR 404! FILE NOT FOUND \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		menu();
	}
	else
	{
		fprintf(ptr,"%s %s %s %d %d \n",ab.code, ab.movie, ab.showtime, ab.cost, ab.tickets);
		
		printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DATA RECORDED SUCCESSFULLY \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	}
	printf("\n");
	fclose(ptr);
	printf("\n\n\t\t\t\t\tPress Any Key To Continue");
	getch();
	system("cls");
	menu();
	}
}

void ViewMovie()
{
	char ch,i;
	FILE *ptr;

	ptr = fopen("movies.txt","r");
	
	if(ptr == NULL)
	{
		printf("File not found !");
		exit(1);
	}
	else
	{	
		system("cls");
		printf("\t\t\t\t LIST OF MOVIES :-\n");
		printf(" |Movie Code|\t\t|Movie Name|\t\t |Showtime|\t\t|Ticket Cost|\t\t|Tickets|\n");
		printf("------------------------------------------------------------------------------------------------------------------------\n");
		
		while (fscanf(ptr,"%s %s %s %d %d \n",ab.code,ab.movie,ab.showtime,&ab.cost,&ab.tickets) != EOF)
		{	
			printf("   %4s\t   %20s\t  \t\t%8s\t\t    %4d\t\t%4d \n",ab.code,ab.movie,ab.showtime,ab.cost,ab.tickets);
		
				
		}
      	
	}
      	

	
	fclose(ptr);
	menu();
}

void BookTicket()
{
	struct system ab;
	
	FILE *ptr;
	FILE *trans;
	FILE *newrec;
	
	int  TotalAmount;
	
	char ch;
	char MovieCode[20];
	char choice;
	
	ptr = fopen("movies.txt","r");
	
	if (ptr == NULL)
	{
		printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ERROR 404! FILE NOT FOUND \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		system("cls");
		menu();
	}
	
	else
	{
		system("cls");
		printf("\t\t\t\t LIST OF MOVIES :-\n");
		printf(" |Movie Code|\t\t|Movie Name|\t\t |Showtime|\t\t|Ticket Cost|\t\t|Tickets|\n");
		printf("------------------------------------------------------------------------------------------------------------------------\n");
		
		while (fscanf(ptr,"%s %s %s %d %d \n",ab.code,ab.movie,ab.showtime,&ab.cost,&ab.tickets) != EOF)
		{	
			printf("   %4s\t   %20s\t  \t\t%8s\t\t    %4d\t\t%4d \n",ab.code,ab.movie,ab.showtime,ab.cost,ab.tickets);		
		}
	}
	
	fclose(ptr);
	
	printf("\n\n \t\t\t Enter The Movie Code : ");
	scanf("%s",&MovieCode);
	
	ptr = fopen("movies.txt","r");
	newrec = fopen("moviesnew.txt","w");
	
	if (ptr == NULL)
	{
		printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ERROR 404! FILE NOT FOUND \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		system("cls");
		getch();
		menu();
	}
	
	else
	{
		while (fscanf(ptr,"%s %s %s %d %d \n",ab.code,ab.movie,ab.showtime,&ab.cost,&ab.tickets) != EOF)
		{
					
			if (strcmp(ab.code,MovieCode)==0)
			{
				printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 RECORD FOUND SUCCESSFULLY \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
				printf("\n\t\tCode : %s",ab.code);
				printf("\n\t\tMovie Name : %s",ab.movie);
				printf("\n\t\tShowtime : %s",ab.showtime);
				printf("\n\t\tCost Per ticket : %d",ab.cost);
				printf("\n\t\tTicket Status : %d",ab.tickets);
				
				if (ab.tickets==0)
				{
					printf("\n \t\t\t ----------------------------------------");
					printf("\n\t\t\t\tAll Tickets Have Been Booked\n");
					printf("\t\t\t\tPress Any Key To Book Anoter Movie : ");
					printf("\n \t\t\t ----------------------------------------");
					getch();
					BookTicket();
				}
				
				printf("\n\n\n \t\t\t\t Total Number of Tickets : ");
				scanf("%d", &ticket.tickets);	
				
				if (ticket.tickets>5)
				{
					printf("You Cannot Book More Then 5 Seats");
					printf("\t\t\tPress Any Key To Continue");
					getch();
					system("cls");
					BookTicket();
				}
				else
				{
					TotalAmount = ab.cost * ticket.tickets;
					ab.tickets-=ticket.tickets;
					printf("\n \t\t\t ----------------------------------------");
					printf("\n\t\t\t\tTotal Amount : %d",TotalAmount);
					printf("\n \t\t\t ----------------------------------------");

					fprintf(newrec,"\n%s %s %s %d %d\n",ab.code, ab.movie, ab.showtime, ab.cost, ab.tickets);	
	
					trans = fopen ("Transactions.txt","a");
	
					if (trans == NULL)
					{
						printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ERROR 404! FILE NOT FOUND \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
						printf("\n \t\t\tPress Any Key To Continue");
						getch();
						system("cls");
						menu();
					}
	
					else 
					{
					fprintf(trans,"\nMovie Code : %s\n",MovieCode);
					fprintf(trans,"Movie : %s\n",ab.movie);
					fprintf(trans,"Cost Per Ticket : %d\n",ab.cost);
					fprintf(trans,"Total Tickets : %d\n",ticket.tickets);
					fprintf(trans,"Total Amount : %d\n",TotalAmount);
					printf("\n------------------------------------------------------------------------------------------------------------------------\n");
					printf("\n\t\t \xB2\xB2\xB2\xB2\xB2 DATA RECORDED SUCCESSFULLY \xB2\xB2\xB2\xB2\xB2  ");
					printf("\n------------------------------------------------------------------------------------------------------------------------\n");
					
					}
				}
								
			}
			else
			{
				fprintf(newrec,"\n%s %s %s %d %d\n",ab.code, ab.movie, ab.showtime, ab.cost, ab.tickets);	
			}
		}
			
					printf("\n \t\t\t Do you want to book again? Press Y for Yes and N for No: ");
					scanf(" %c", &choice);
					
					switch(choice)
					{
					 	case 'y':
						case 'Y': system("cls");
								  fclose(trans);
								  fclose(ptr);
								  fclose(newrec);
							      remove("movies.txt");
								  rename("moviesnew.txt","movies.txt");
							 	  BookTicket();
							  	  break;
						
						case 'N':
						case 'n': printf("\n \t\t\t Press any key to go back to menu");
							  	  getch();
							  	  system("cls");
							      fclose(trans);
								  fclose(ptr);
								  fclose(newrec);
							      remove("movies.txt");
								  rename("moviesnew.txt","movies.txt");
								  menu(); 
							      break;
					}
					

		}
	

	system("cls");
	menu();
}

void ViewTransactions()
{
	char ch,i;
	FILE *trans;

	trans = fopen("Transactions.txt","r");
	
	if(trans == NULL)
	{
		printf("File not found !");
		printf("\t\t\tPress Any Key To Continue");
		getch();
		system("cls");
		menu();
	}
	else
	{	
		system("cls");
		printf("\t\t\t\t All Transactions :-\n");
		while( ( ch = fgetc(trans) ) != EOF )
		{	
			printf("%c",ch);	
		}
      	
	}
	
	fclose(trans);
	menu();	
}

void EditMovie()
{
	struct system ab;
	
	FILE *ptr;
	FILE *editrec;
	
	int choice=0;
	int ticket=0;
	
	char movieName[30];
	char ch;
	char MovieCode[20];
	
	ptr = fopen("movies.txt","r");
	
	if (ptr == NULL)
	{
		printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ERROR 404! FILE NOT FOUND \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		system("cls");
		menu();
	}
	
	else
	{
		system("cls");
		printf("\t\t\t\t LIST OF MOVIES :-\n");
		printf(" |Movie Code|\t\t|Movie Name|\t\t |Showtime|\t\t|Ticket Cost|\t\t|Tickets|\n");
		printf("------------------------------------------------------------------------------------------------------------------------\n");
		
		while (fscanf(ptr,"%s %s %s %d %d \n",ab.code,ab.movie,ab.showtime,&ab.cost,&ab.tickets) != EOF)
		{	
			printf("   %4s\t   %20s\t  \t\t%8s\t\t    %4d\t\t%4d \n",ab.code,ab.movie,ab.showtime,ab.cost,ab.tickets);
		}
	}
	
	fclose(ptr);
	
	printf("Enter The Movie Code : ");
	scanf("%s",&MovieCode);
	
	ptr = fopen("movies.txt","r");
	editrec = fopen("moviesnew.txt","w");
	
	if (ptr == NULL)
	{
		printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ERROR 404! FILE NOT FOUND \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		system("cls");
		getch();
		menu();
	}
	
	else
	{
		while (fscanf(ptr,"%s %s %s %d %d \n",ab.code,ab.movie,ab.showtime,&ab.cost,&ab.tickets) != EOF)
		{
					
			if (strcmp(ab.code,MovieCode)==0)
			{
				printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 RECORD FOUND SUCCESSFULLY \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
				printf("\n\t\tCode : %s",ab.code);
				printf("\n\t\tMovie Name : %s",ab.movie);
				printf("\n\t\tShowtime : %s",ab.showtime);
				printf("\n\t\tCost Per ticket : %d",ab.cost);
				printf("\n\t\tTicket Status : %d",ab.tickets);
				
			printf("\n---------------------------------------------------------------------------------------------------------------------");
			printf("\n\n\t\t\t\t\tWhich thing you want to edit?");
			printf("\n\n\t\t\t\t\t1) Movie Name");
			printf("\n\t\t\t\t\t2) Ticket Status");

			printf("\n\n\t\t\t\t\tEnter your choice: ");
			scanf("%d",&choice);
			printf("\n---------------------------------------------------------------------------------------------------------------------");
				
				switch(choice)
			
				{
    				case 1: printf("\n\t\t\t\t\tEnter Movie Name : ");
    						scanf("%s", movieName);
							fprintf(editrec,"\n%s %s %s %d %d\n",ab.code, movieName, ab.showtime, ab.cost, ab.tickets);
							break;
    	
    				case 2:	printf("\n\t\t\t\t\tEnter ticket quantity you want to update : ");
    						scanf("%d",&ticket);
							fprintf(editrec,"\n%s %s %s %d %d\n",ab.code, ab.movie, ab.showtime, ab.cost, ticket);	
    						break;
    		
    				default: printf("\nInvalid choice. Press any key to go back to menu ");
    						 getch();
    						 menu();
				}
		
				}//if condition ends here
			
			else
		// nhi cherna
			{
				fprintf(editrec,"\n%s %s %s %d %d\n",ab.code, ab.movie, ab.showtime, ab.cost, ab.tickets);	
			}
		}
		fclose(ptr);
		fclose(editrec);
		
		
//	ptr=fopen("movies.txt","w");
//  editrec=fopen("moviesnew.txt","r");
    
    remove("movies.txt");
	rename("moviesnew.txt","movies.txt");
    
//	while(fscanf(editrec,"\n%s %s %s %d %d\n",ab.code, ab.movie, ab.showtime, ab.cost, ab.tickets)!=EOF)
//	{
//		fprintf(ptr,"   \n%s %s %s %d %d\n",ab.code,ab.movie,ab.showtime,ab.cost,ab.tickets);
//
//	}
//	fclose(ptr);
//	fclose(editrec);

	printf("\n\n\t\t\t\t\tYour Movie has been updated");
	system("cls");
	menu();
	
	}
	
	getch();
	system("cls");
	menu();
}

void LogOut()
{
	int i,j;
	system("cls");
	system("color 07");
			printf("\n\n\n\n\n\n");
	
			printf("\t\t\t\t");
			for(i=1;i<50;i++)
			{
				printf("*");
			}
	
	
			printf("\n");
	
			for(i=1;i<10;i++)
			{
				printf("\t\t\t\t");
				printf("*");
		
			for(j=1;j<48;j++)
			{
				printf(" ");
			
				if(i==5)
				{
					j=48;
					printf("\t        LOG Out SUCCESSFUL	                ");
					printf("\n\t\t\t\t\tTHANK-YOU FOR USING OUR PROGRAM 	");
				}		
			}
			printf("*\n");
			}
			
			printf("\t\t\t\t");
			
			for(i=1;i<50;i++)
			{
				
				printf("*");
			}
	
		printf("\n\n\t\t\t\t\t    Press any key to Terminate: ");
		getch();
		exit(0);
}

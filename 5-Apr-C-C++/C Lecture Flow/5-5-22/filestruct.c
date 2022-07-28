 #include<stdio.h>
 #include<stdlib.h>
 #include<conio.h>

typedef struct Customer
{
	int  m_custId;
	char m_custName[20];
	
}Record;

 int main()
 {
	Record cust;
	FILE *fp;
	char ans='y';
	
	fp=fopen("customer.txt","w+");

	if(fp==NULL)
	{
		printf("Error in opening the file :\n");
		exit(1);
	}

	do
	{
		printf("\nEnter customer Id : ");
		scanf("%d",&cust.m_custId);
		
		printf("\nEnter customer Name : ");
		fflush(stdin);
		scanf("%s",cust.m_custName);

		fprintf(fp,"\n%d\t%s",cust.m_custId,cust.m_custName);
		
		printf("\nDo u want to continue:(y/n)");
		fflush(stdin);
		scanf("%c",&ans);

	}while(ans=='y');

	printf("\n");
	fclose(fp);

	fp=fopen("customer.txt","r");

	if(fp==NULL)
	{
		printf("Error in opening the file :\n");
		exit(1);
	}
	while(fscanf(fp,"\n%d\t%s",&cust.m_custId,cust.m_custName)!=EOF)
	{
		printf("\n%d %s",cust.m_custId,cust.m_custName);
	}

	fclose(fp);

	getch();

	return 0;
 }

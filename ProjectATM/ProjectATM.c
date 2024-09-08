#include <stdio.h>
#include <stdlib.h>

main(){
	char p[3],c,h='0';
	int index=0,i=1,a=0,e;
	while(i<=3){
	printf("**Welcome to ATM!!** \n\n");
	printf(" ********************\n");
	printf(" ** Give password: **\n");
	printf(" ******************** \n");
	while((c = getch()) != 13){
		if(c == 8){
			putch('\b');
			putch(NULL);
			putch('\b');
			index--;
		}else{
			p[index++] = c;
			putch('*');
		}
	}
	p[index] = '\0';
	system("cls");
		if(p[0]=='1'){
			if(p[1]=='2'){
				if(p[2]=='3'){
					printf("access granted");
					sleep(1);
					break;
				}
			}
		}
		i++;
		printf("access denied");
		sleep(1);
		system("cls");
		for(e=1;e<=3;e++){
			p[e]=0;
		}
		if(i==4)return(0);
	}
	i=0;
	while(h!='5'){
		system("cls");
		printf("Welcome to ATM. \n\n");
		printf("1. Set the initial balance\n");
		printf("2. Credit balance\n");
		printf("3. Debit balance\n");
		printf("4. See total balance\n");
		printf("5. Exit\n");
		printf("Press 1 2 3 4 or 5 : ");
		scanf("%c",&h);
		if(h=='1'){
			system("cls");
			printf("Set your account balance : ");
			scanf("%d",&i);
			system("cls");
			printf("balance set at : %d\n",i);
			sleep(2);
			system("cls");
			printf("Back to the menu?(y/n) : ");
			scanf(" %c",&h);
			if(h=='n')break;
		}
		if(h=='2'){
			system("cls");
			printf("Set your deposit amount : ");
			scanf("%d",&a);
			system("cls");
			i+=a;
			printf("balance set at : %d\n",i);
			sleep(2);
			system("cls");	
			printf("Back to the menu?(y/n) : ");
			scanf(" %c",&h);
			if(h=='n')break;
		}
		if(h=='3'){
			system("cls");
			printf("Set your withrowing amount : ");
			scanf("%d",&a);
			system("cls");
			if(i>=a){
				i-=a;
				printf("balance set at : %d",i);
			}else{
				printf("balance too low\n");
			}
			sleep(2);
			system("cls");
			printf("Back to the menu?(y/n) : ");
			scanf(" %c",&h);
			if(h=='n')break;
		}
		if(h=='4'){
			system("cls");
			printf("balance set at : %d\n",i);
			sleep(2);
			system("cls");
			printf("Back to the menu?(y/n) : ");
			scanf(" %c",&h);
			if(h=='n')break;	
		}	
	}
	return 0;
}

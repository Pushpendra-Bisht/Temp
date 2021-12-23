#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define SIZE 5
int cqueue[SIZE];
int front = -1;
int rear = -1;

void enQueue();
void deQueue();
void traverse();

int main(){
	int choice;
	while(1){
		printf("\n 1. enQueue");
		printf("\n 2. deQueue");
		printf("\n 3. Traverse");
		printf("\n 4. exit");
		printf("\n Enter ur choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1: enQueue(); break;
			case 2: deQueue(); break;
			case 3: traverse(); break;
			case 4: exit(0); 
		}
	}
}
void enQueue() {
	int num;
  if ((rear+1)%SIZE == front)
    printf("\n Queue is full!! \n");
  else {
  	printf("\n Enter no. to insert: ");
  	scanf("%d", &num);
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    cqueue[rear] = num;
  }
}

void deQueue() {
   if (front == -1) printf("\n Queue is empty \n");
   else {
      printf("\n Deleted element is %d \n", cqueue[front]);
      front++; //f=f+1%n
      if (front > rear){
      	front = -1; rear= -1;
      	} 
    }
}

void traverse() {
	int i;  
	if (front == -1) printf("\n Queue is empty \n");
   else {
	if (front > rear){
		for(i =  front; i<SIZE; i++) printf("  %d ", cqueue[i]);
		for(i =  0; i<= rear; i++) printf("  %d ", cqueue[i]);
	}
	else { 
		for(i =  front; i<=rear; i++) printf("  %d ", cqueue[i]);
      	}
   }

}


#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int item;
	struct QNode *link;
}QNode;

typedef struct {
	QNode *front;
	QNode *rear;
}QType;

void radixSort(int dat[], int size, int DIGITSIZE);
void initQueue(QType *queue);
int isEmpty(QType *queue);
void enQueue(QType *queue, int bItem);
int deQueue(QType *queue);


void main(void) {
	int dat[10000];
	int i, size, DIGITSIZE;                  
	scanf("%d", &size);
	scanf("%d", &DIGITSIZE);

	for (i = 0; i<size; i++)
	{
		scanf("%d", &dat[i]);
	}

	{
		radixSort(dat, size, DIGITSIZE);
	}
	//.기수 정렬 결과를 출력한다.  
	{
		for (i = 0; i<size; i++) {
			printf("%d ", dat[i]);
		}
	}
}


void radixSort(int dat[], int size, int DIGITSIZE) {
	int bNum;                     
	int digitNum;                
	int arrNum;                 
	int factor;                     
	QType qArr[size];

	{
		for (bNum = 0; bNum<size; bNum++) {
			initQueue(&qArr[bNum]);    
		}
		factor = 1;

		for (digitNum = 0; digitNum<DIGITSIZE; digitNum++) {

			for (bNum = 0; bNum<size; bNum++) {
				enQueue(&qArr[(dat[bNum] / factor) % 10], dat[bNum]);
			}
			bNum = 0;               
			arrNum = 0;             

			while (bNum<size) {

				while (!(isEmpty(&qArr[bNum]))) {
					dat[arrNum] = deQueue(&qArr[bNum]);
					arrNum++;     
				}
				bNum++;           
			}
			factor *= 10;         
		}
	}
}

void initQueue(QType *queue) {
	{
		queue->front = NULL;
		queue->rear = NULL;
	}
}
int isEmpty(QType *queue)
{
	return (queue->front == NULL);
}

void enQueue(QType *queue, int arrData) {
	QNode *bNode = (QNode *)malloc(sizeof(QNode));
	{
		if (bNode == NULL) {
			printf("%s\n", "메모리를 할당할 수 없습니다.");
			exit(1);
		}
		else {
			bNode->item = arrData;       
			bNode->link = NULL;        

			if (isEmpty(queue)) {
				queue->front = bNode;      
				queue->rear = bNode;       
			}
			else {
				queue->rear->link = bNode;
				queue->rear = bNode;          
			}
		}
	}
}

int deQueue(QType *queue) {
	QNode *bNode = queue->front;
	int bItem;
	{
	
		if (isEmpty(queue)) {
			printf("%s\n", "큐가 비었습니다.");
			exit(1);
		}
		else {
			bItem = bNode->item;               
			queue->front = queue->front->link;

			if (isEmpty(queue)) {
				queue->rear = NULL;   
			}
			free(bNode);                    
			return bItem;                   
		}
	}
}

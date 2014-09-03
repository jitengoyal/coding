#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct rec {
	int rno;
	char s[25];
	struct rec *next;
};
typedef struct rec stud_rec;

void insert(stud_rec*, int, char*);

void print(stud_rec*);

stud_rec* delete(stud_rec*, char*);

int main() {

	stud_rec *student;

	student = (stud_rec *) malloc(sizeof(stud_rec));

	student->rno = 10;

	strcpy(student->s, "raju");

	printf("%d %s\n", student->rno, student->s);

	student->next = NULL;

	insert(student, 12, "rani");

	insert(student, 13, "padma");

	insert(student, 14, "hetu");

	insert(student, 15, "ravi");

	print(student);

	student = delete(student, "padma");

	printf("printing list after deleting padma\n");

	print(student);



	student = delete(student, "raju");

	printf("printing list after deleting raju\n");

	print(student);



	student = delete(student, "raki");

	printf("printing list after deleting raki\n");

	print(student);



	/*
	 *
	 *  student = delete(student, "ravi");
	 *
	 *   printf("printing list after deleting ravi\n");
	 *
	 *    print(student);
	 *
	 *
	 *
	 *     student = delete(student, "hetu");
	 *
	 *      printf("printing list after deleting hetu\n");
	 *
	 *       print(student);
	 *
	 *
	 *
	 *        
	 *
	 *         student = delete(student, "rani");
	 *
	 *          printf("printing list after deleting rani\n");
	 *
	 *           print(student);
	 *
	 *            */



}



void insert(stud_rec *head, int rno, char *s) {

	stud_rec *last, *temp;

	temp = (stud_rec*) malloc(sizeof(stud_rec));

	temp->rno = rno;

	strcpy(temp->s, s);

	temp->next = NULL;

	if (head == NULL) {  

		head = temp;

	}else {

		while(head->next != NULL) {

			head = head->next;

		}

		head->next = temp;

	}

	return;

}



void print(stud_rec *head) {

	while (head != NULL) {

		printf("Roll no: %d Name: %s\n", head->rno, head->s);

		head = head->next;

	}

	return;

}



stud_rec* delete(stud_rec *head, char *s) {



	stud_rec *prev, *cur;

	cur = head;

	prev = cur;



	while (cur != NULL ) {

		if (0 == strcmp(cur->s, s)) {

			prev->next = cur->next;

			if (cur == head) { //firt node being deleted.

				head = head->next;

			}



			cur->next = NULL;

			free(cur);

			return head;

		}

		prev = cur;

		cur = cur->next;

	}

	//reached end of list -- cann't find s
	//
	// printf("%s cann't be deleted\n", s);
	//
	//  return head;
	//
	//  }

#include"header.h"
int main()
{
	STvoid lib_add_new_book(ST **);          // Option 1
void lib_update_book_details(ST **);   // Option 2
void lib_remove_book(ST **);           // Option 3
void lib_search_book(ST *);            // Option 4
void lib_view_all_books(ST *);         // Option 5
void lib_issue_book(ST *, ST **);      // Option 6
void lib_return_book(ST *, ST **);     // Option 7
void lib_list_issued_books(ST *);      // Option 8
void lib_exit(void);  *hptr = 0;
	char ch;

	while(1)
	{
		printf("\n-----------------------------------------\n");
		printf("|         STUDENT RECORD MENU           |\n");
		printf("|---------------------------------------|\n");
		printf("|        A/a : Add New Record           |\n");
		printf("|        D/d : Delete A Record          |\n");
		printf("|        S/s : Show The List            |\n");
		printf("|        M/m : Modify A Record          |\n");
		printf("|        V/v : Save                     |\n");
		printf("|        E/e : Exit                     |\n");
		printf("|        T/t : Sort The List            |\n");
		printf("|        L/l : Delete All Records       |\n");
		printf("|        R/r : Reverse The List         |\n");
		printf("-----------------------------------------\n");
		printf("Enter Your Choice: ");
		scanf(" %c",&ch);

		switch(ch)
		{
			case 'A':
			case 'a':
				stud_add(&hptr);
				break;

			case 'D':
			case 'd':
				stud_del(&hptr);
				break;

			case 'S':
			case 's':
				stud_show(hptr);
				break;

			case 'M':
			case 'm':
				modify(hptr);
				break;

			case 'V':
			case 'v':
				save(hptr);
				printf("Data Saved Successfully.\n");
				break;

			case 'T':
			case 't':
				sort(hptr);
				break;

			case 'L':
			case 'l':
				delete_all(&hptr);
				printf("All Records Deleted.\n");
				break;

			case 'R':
			case 'r':
				reverse(hptr);
				printf("List Reversed.\n");
				break;

			case 'E':
			case 'e':
				exit_(hptr);
				return 0;
				break;

			default:
				printf("Invalid Choice\n");
		}
	}
}

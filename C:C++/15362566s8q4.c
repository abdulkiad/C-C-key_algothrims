/*  A queue is a data which can be represented as a linked list. A queue is a constrained version
of a linked list because it is a first in first out (FIFO) data structure. Nodes can only be added
to the end of the queue and removed from the start of the queue. Modify the Linked List
program given in the lecture notes to create a queue data structure. The same functions for
adding, removing, printing nodes should be present.  */
#include <stdio.h>
#include <stdlib.h>

    /* self-referential structure */
struct listNode {
             char data; /* each listNode contains a character */
             struct listNode *nextPtr; /* pointer to next node */
}; /* end structure listNode */ 


typedef struct listNode ListNode; /* synonym for struct listNode */
typedef ListNode *ListNodePtr; /* synonym for ListNode* */

/* prototypes */
void insert( ListNodePtr *sPtr, char value );
char delete( ListNodePtr *sPtr, char value );
int isEmpty( ListNodePtr sPtr );
void printList( ListNodePtr currentPtr );
void instructions( void );

int main( void )
{
    ListNodePtr startPtr = NULL; /* initially there are no nodes */
    int choice; /* user's choice */
    char item; /* char entered by user */
    
    instructions(); /* display the menu */
    printf( "? " );
    scanf( "%d", &choice );

     /* loop while user does not choose 3 */
    while ( choice != 3 ) {
        switch ( choice ) {
            case 1:
                printf( "Enter a character: " );
                scanf( "\n%c", &item );
                insert( &startPtr, item ); /* insert item in list */
                printList( startPtr );
                break;
             case 2: /* delete an element */
                 /* if list is not empty */
                if ( !isEmpty( startPtr ) ) {
                    printf( "LEFT The Que\n " );
                 
                    /* if character is found, remove it*/
                    if ( delete( &startPtr, item ) ) { /* remove item */
                        printList( startPtr );
                    } /* end if */
                    else {
                        printf( " not found.\n\n" );
                    } /* end else */
                } /* end if */
                else {
                    printf( "List is empty.\n\n" );
                } /* end else */

                break;
            default:
                 printf( "Invalid choice.\n\n" );
                 instructions();
                 break;
                 } /* end switch */

        printf( "? " );
        scanf( "%d", &choice );
} /* end while */

    printf( "End of run.\n" );
    return 0; /* indicates successful termination */
     } /* end main */

     /* display program instructions to user */
void instructions( void )
{
    printf( "Enter your choice:\n"
         " 1 to enter the que and enter one character to represent you.\n"
         " 2 to leave the que.\n"
         " 3 to end.\n" );
} /* end function instructions */

     /* Insert a new value into the list in sorted order */
void insert( ListNodePtr *sPtr, char value )
{
    ListNodePtr newPtr = malloc( sizeof( ListNode ) ); /* create node */
    if ( newPtr != NULL ) { /* is space available */
        newPtr->data = value; /* place value in node */
        newPtr->nextPtr = NULL; /* node does not link to another node */

        ListNodePtr previousPtr = NULL;  /* pointer to previous node in list */
        ListNodePtr currentPtr = *sPtr; /* pointer to current node in list */

        /* loop to find the correct location in the list */
        while ( currentPtr != NULL && value > currentPtr->data ) {
            previousPtr = currentPtr; /* walk to ... */
            currentPtr = currentPtr->nextPtr; /* ... next node */
        } /* end while */ 

                /* insert new node at beginning of list */
        if ( previousPtr == NULL ) {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        } /* end if */
        else { /* insert new node between previousPtr and currentPtr */
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
            } /* end else */
    } /* end if */
    else {
        printf( "%c not inserted. No memory available.\n", value );
    } /* end else */
} /* end function insert */

/* Delete a list element */
char delete( ListNodePtr *sPtr, char value )
{
    /* delete first node */
  
        ListNodePtr tempPtr = *sPtr; /* hold onto node being removed */
        *sPtr = ( *sPtr )->nextPtr; /* de-thread the node */
        free( tempPtr ); /* free the de-threaded node */
        return value;
      /* end if */
    
} /* end function delete */

     /* Return 1 if the list is empty, 0 otherwise */
int isEmpty( ListNodePtr sPtr )
{
    return sPtr == NULL;
} /* end function isEmpty */

     /* Print the list */
void printList( ListNodePtr currentPtr )
{
    /* if list is empty */
    if ( currentPtr == NULL ) {
        printf( "List is empty.\n\n" );
     } /* end if */
    else {
        printf( "The Queue is:\n" );

    /* while not the end of the list */
    while ( currentPtr != NULL ) {
        printf( "%c --> ", currentPtr->data );
        currentPtr = currentPtr->nextPtr;
     } /* end while */

    printf( "NULL\n\n" );
     } /* end else */
} /* end function printList */

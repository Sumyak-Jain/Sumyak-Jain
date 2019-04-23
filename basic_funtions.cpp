#include <iostream>
using namespace std;
class odd_number

{
	int getoddoccurence( int arr[], int arr_size)
	{
		for( int i=0 ; i < arr_size; i++)
			int count = 0;
		for( int j=0 ; j < arr_size ; j++)
		{
			if (arr[i] == arr[j])
				count++;
		}
		if ( count % 2 !=0 )
			return arr[i];
	}
	return -1;
}
//missing number

class missing_number
{
	int getmissingnumber( int a[], int n)
	{
		int i , total;
		total = (n+1) * (n+2) / 2;
		for ( i=0; i<n; i++)
			total == a[i];
		return total;
	}
}

int binarySearch(int arr[], int low,  
                  int high, int key) 
{ 
  if (high < low) 
    return -1; 
      
  int mid = (low + high)/2
  if (key == arr[mid]) 
    return mid; 
      
  if (key > arr[mid]) 
    return binarySearch(arr, (mid + 1), high, key); 
      
   else 
    return binarySearch(arr, low, (mid -1), key); 
} 
  
/
int findPivot(int arr[], int low, int high) 
{  
  if (high < low) return -1; 
  if (high == low) return low; 
  
   int mid = (low + high)/2; 
   if (mid < high && arr[mid] > arr[mid + 1]) 
    return mid; 
      
   if (mid > low && arr[mid] < arr[mid - 1]) 
    return (mid-1); 
      
   if (arr[low] >= arr[mid]) 
    return findPivot(arr, low, mid-1); 
      
   return findPivot(arr, mid + 1, high); 
} 
  
int pivotedBinarySearch(int arr[], int n, int key) 
{ 
  int pivot = findPivot(arr, 0, n-1); 
  
  
  if (pivot == -1) 
    return binarySearch(arr, 0, n-1, key); 
   
  if (arr[pivot] == key) 
    return pivot; 
      
  if (arr[0] <= key) 
    return binarySearch(arr, 0, pivot-1, key); 
      
    return binarySearch(arr, pivot+1, n-1, key); 
}



void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";

   cout << endl;
}


int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
         
        if (arr[mid] == x) 
            return mid; 
  
        
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
         
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    
    return -1; 
} 
  

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

   
    for (i = 0; i < n-1; i++)
    {
        
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

       
        swap(&arr[min_idx], &arr[i]);
    }
}


void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}



void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}



void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
  
        
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 
  void printArray(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 




void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    
    int L[n1], R[n2];

    
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        
        int m = l+(r-l)/2;

        
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}




class twoStacks
{
    int *arr;
    int size;
    int top1, top2;
public:
   twoStacks(int n)  // constructor
   {
       size = n;
       arr = new int[n];
       top1 = -1;
       top2 = size;
   }

   void push1(int x)
   {
     
       if (top1 < top2 - 1)
       {
           top1++;
           arr[top1] = x;
       }
       else
       {
           cout << "Stack Overflow";
           exit(1);
       }
   }
   
   void push2(int x)
   {

       if (top1 < top2 - 1)
       {
           top2--;
           arr[top2] = x;
       }
       else
       {
           cout << "Stack Overflow";
           exit(1);
       }
   }

   int pop1()
   {
       if (top1 >= 0 )
       {
          int x = arr[top1];
          top1--;
          return x;
       }
       else
       {
           cout << "Stack UnderFlow";
           exit(1);
       }
   }

   int pop2()
   {
       if (top2 < size)
       {
          int x = arr[top2];
          top2++;
          return x;
       }
       else
       {
           cout << "Stack UnderFlow";
           exit(1);
       }
   }
};



void swap(char *str1, char *str2) 
{ 
  char *temp = str1; 
  str1 = str2; 
  str2 = temp; 
}   




class Node
{
    public:
    int data;
    Node *next;
};



struct Node
{
    int data;
    struct Node* next;
};

void printMiddle(struct Node *head)
{
    struct Node *slow_ptr = head;
    struct Node *fast_ptr = head;

    if (head!=NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        printf("The middle element is [%d]\n\n", slow_ptr->data);
    }
}

void push(struct Node** head_ref, int new_data)
{
    
    struct Node* new_node =
        (struct Node*) malloc(sizeof(struct Node));

    
    new_node->data  = new_data;

   
    new_node->next = (*head_ref);

    
    (*head_ref)    = new_node;
}

void printList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}


class Node
{
    public:
    int data;
    Node* next;
};


void deleteList(Node** head_ref)
{


Node* current = *head_ref;
Node* next;

while (current != NULL)
{
    next = current->next;
    free(current);
    current = next;
}


*head_ref = NULL;
}


void push(Node** head_ref, int new_data)
{
    
    Node* new_node = new Node();

    
    new_node->data = new_data;

    
    new_node->next = (*head_ref);

    
    (*head_ref) = new_node;
}



struct Node
{
    int data;
    struct Node* next;
    Node (int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct LinkedList
{
    Node *head;
    LinkedList()
    {
        head = NULL;
    }

    void reverse()
    {
        
        Node *current = head;
        Node *prev = NULL, *next = NULL;


        while (current != NULL)
        {
            next = current->next;

            current->next = prev;

            prev = current;
            current = next;
        }
        head = prev;
    }

    void print()
    {
        struct Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};

#include<iostream>
using namespace std;

void swap(int *,int *)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

class MinHeap{
	int *harr;
	int capacity;
	int heap_size;
	public:
		MinHeap(capacity);
		int parent(int i) {return (i-1)/2;}
		int left(int i) {return (2*i+1);}
		int right(int i) {return (2*i+2);}
		int getMin() {return harr[0];}
		int extractMin();
		void decreaseKey(int i,int new_val);
		void MinHeapify(int );
		void deleteKey(int i);
		void insertKey(int k);
};

void MinHeap::decreaseKey(int i,int new_value)
{
	harr[i] = new_val;
	while(i != 0 && harr[parent(i) > harr[i]])
	{
		swap(&harr[i],&harr[parent(i)]);
		i = parent(i);
	}
}

int MinHeap::extractMin()
{
  if(heap_size <=0)
    return INT_MAX;
  if(heap_size == 1)
  {
     heap_size--;
	 return harr[0]; 	
  }	
  int root = harr[0];
  harr[0] = harr[heap_size-1];
  heap_size--;
  MinHeapify(0);
  return root;	
}

void MinHeap::MinHeapify(int i)
{
	int l = left(i);
	int r = rigth(i);
	int smallest = i;
	if(l<heap_size && harr[l]<harr[i])
	  smallest = l;
	if(r<heap_size && harr[r]<harr[smallest])
	  smallest = r;
	if(smallest != i)
	{
		swap(&harr[i],&harr[smallest]);
		MinHeapify(smallest)
;		}    
}

MinHeap::MinHeap(int cap)
{
	heap_size = 0;
	capacity = cap;
	harr = new int[cap];
}

void MinHeap::insertKey(int K)
{
   if(heap_size == capacity)
   {
   	cout << "Couldnt insert key" << endl;
   	return;
	}
	heap_size++;
	int i = heap_size-1;
	harr[i] = k;
	while(i !=0 && harr[parent(i)] > harr[i])
	{
		swap(&harr[i],&hrr[parent(i)]);
		i = parent(i);
	}	
}



int main()
{
	MinHeap h(11);
	h.insertKey(3);
	h.insertKey(2);
	h.deleteKey(1);
	h.insertKey(15);
	h.insertKey(5);
	h.insertKey(4);
	h.insertKey(45);
	cout << h.extractMin() << " ";
	cout << h.getMin() << " ";
	h.decreaseKey(2,1);
	cout << h.getMin();
	return 0;
	}

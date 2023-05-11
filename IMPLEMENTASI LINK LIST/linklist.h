class Node{
	
	public:
		int	 value; // data value
		Node *next; // pointer untuk node selanjutnya 
		
		Node(){ // constructur: sebua method yang dipanggil pertama kali
			next = NULL;
		}
};

class Linkedlist{

		
	public:
		Node *head;
		Node *tail;
		void insertToHead(int);
		void insertToTail(int);
		void insetAfter(int, int);// insert data x, setelah node b insretAfter (X, B)
		
		void deleteFromHead();
		void deleteFromTail();
		void deleteByValue(int);
		
		void printAll();
		
		Linkedlist(){
			head = tail = NULL;
		}
		
};

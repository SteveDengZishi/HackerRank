template<class Object>
			struct Node{
				Object data;
				Node* next;
				Node(Object x):data(x),next(nullptr){ }
			};
			
			template<class Object>
			class queue{
			public:
				//constructor
				queue():size(0),front(nullptr),tail(nullptr){ }
				//always check whether is empty
				bool isEmpty(){return size==0;}

				const Object& top(){
					if(isEmpty()){
						throw underflow_exception(“empty”);
					}
					else return front->data;
				}

				Object& pop(){
					if(isEmpty()){
						throw underflow_exception(“empty”);
					}
					else{
						Node* tmp=front;
						front=front->next;
					
						- - size;
						return std::move(tmp->data);
				}

				void enqueue(Object& x){
					if(isEmpty()){
						Node tmp=Node(x);
						front=& tmp;
						tail=& tmp;
					}
					else{
						Node tmp=Node(x);
						tail->next=& tmp;
						tail=tail->next;
					}
					++size;
				}
				
				void dequeue(){
					if(isEmpty()){
						throw underflow_exception(“empty”);
					}
					else if(size==1){
						front=nullptr;
						tail=nullptr;
					}
					else{
						Node* tmp=front;
						front=front->next;
						delete tmp;
						tmp=nullptr;
					}
					- - size;
				}


			private:
				Node* front;
				Node* tail;
				int size;
			};


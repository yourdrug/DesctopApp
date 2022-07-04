#pragma once

namespace KURSWF {
	template <class myType>
	ref	class Node
	{
	public:
		myType data;
		Node^ next;
	};

	template <class myType>
	ref	class Stack
	{
	private:
		Node <myType>^ top;
	public:
		Stack()
		{
			top = nullptr;
		}

		int GetCount()
		{
			int count = 0;
			Node  <myType>^ q = this->top;
			while (q)
			{
				q = q->next;
				count++;
			}
			return count;
		}
		bool isEmpty()
		{
			return (this->top == nullptr);
		}
		myType Peek()
		{
			myType peeked = top->data;
			return peeked;
		}
		myType Pop() {
			if (!isEmpty()) {
				Node  <myType>^ temp = top;
				top = top->next;
				//Stack *temp1 = top->next;
				myType popped = temp->data;
				delete temp;
				return popped;
			}
		}
		void Push(myType data)
		{
			Node  <myType>^ newElem = gcnew Node <myType>();
			newElem->data = data;
			newElem->next = top;
			top = newElem;
		}

		~Stack()
		{
			Node <myType>^ temp = top;
			while (temp != nullptr)
			{
				temp = top->next;
				delete top;
				top = temp;
			}

		}
	};
}
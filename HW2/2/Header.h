#pragma once
template <class T>
class IntCounter {
private:
	T* ptr;
	int* counter;

	void add_reference()
	{
		*(this->counter) += 1;
	}
	void remove_reference()
	{
		*(this->counter) -= 1;
	}
	void freeMemory()
	{
		delete this->ptr;
		delete this->counter;
	}

	void redirectPointers(T* newPtr, int* newCounter)
	{
		this->ptr = newPtr;
		this->counter = newCounter;
	}
	void redirectPointers(const IntCounter& rhs)
	{
		this->redirectPointers(rhs.ptr, rhs.counter);
	}

public:
	
	IntCounter() : ptr(nullptr), counter(new int(0)) {}

	IntCounter(T* newPtr)
	{
		this->redirectPointers(newPtr, new int(1));
		// this->ptr = ptr;
		// this->counter = new int(1);
	}
	IntCounter(const IntCounter& rhs)
	{
		this->redirectPointers(rhs);
		this->add_reference();
	}
	IntCounter& operator=(const IntCounter& rhs)
	{
		// Two objects are the same if they have the same pointer int* ptr,
		// which is different from the usual check in operator=
		if (this->ptr != rhs.ptr) {
			// Remove reference from the old pointer and check if deletion is due
			this->remove_reference();
			if (this->get_count() == 0) {
				this->freeMemory();
			}

			// Point the variables to the new pointer and add a reference
			this->redirectPointers(rhs);
			this->add_reference();
		}
		return *this;
	}
	~IntCounter()
	{
		this->remove_reference();
		if (this->get_count() == 0)
		{
			this->freeMemory();
		}
	}

	int get_count() const
	{
		return *this->counter;
	}
	T get_value() const 
	{
		return *this->ptr;
	}
};

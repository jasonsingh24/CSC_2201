// QueueArray.h

#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H

#include <stdexcept>
#include <iostream>
using namespace std;

#include "Queue.h"

template<typename T>
class QueueArray: public Queue<T> {
	public:
		QueueArray(int maxNumber = Queue<T>::MAX_QUEUE_SIZE);
		QueueArray(const QueueArray &other);
		QueueArray& operator=(const QueueArray &other);

		~QueueArray();

		void enqueue(const T &newDataItem);
		T dequeue();

		void clear();

		bool isEmpty() const;
		bool isFull() const;

		void putFront(const T &newDataItem);
		T getRear();
		int getLength() const;

		void showStructure() const;

	private:
		int maxSize;
		int front;
		int back;
		T *dataItems;
};

#endif

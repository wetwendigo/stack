/// <summary>
/// This class provides a full implementation of a stack
/// abstract data type (ADT). Stacks are a last in, first out
/// (LIFO) ADT.
/// </summary>
/// 
/// Author: Solomon Colley
/// File: Stack.h
/// See <see cref="Stack.cpp"/> for function definitions.
/// Since: 12/13/2019

#pragma once

#include <iostream>
#include <string>
#include "EmptyStackException.h"
#include "FullStackException.h"
#include "NegativeSizeException.h"
#include "StackInterface.h"

template<class ItemType>
class Stack : public StackInterface<ItemType>
{
private:
	const int MAX_SIZE;
	int itemCount, top;
	ItemType *items;
public:
	/// <summary>
	/// A parameterized constructor. Initializes this stack with a
	/// given size.
	/// </summary>
	/// <param name="size">the size of this stack</param>
	/// <exception cref="NegativeSizeException">thrown when size is negative</exception>
	Stack(const int size);

	/// <summary>
	/// The class destructor. Frees allocated memory.
	/// </summary>
	~Stack();

	/// <summary>
	/// Pushes an item onto the stack.
	/// </summary>
	/// <param name="item">the item to be pushed onto the stack</param>
	/// <exception cref="FullStackException">thrown when the stack is full</exception>
	void push(const ItemType& item);

	/// <summary>
	/// Pops the top item off the stack.
	/// </summary>
	/// <exception cref="EmptyStackException">thrown when the stack is empty</exception>
	void pop();

	/// <summary>
	/// Peeks the top item in the stack.
	/// </summary>
	/// <returns>the top item in the stack</returns>
	/// <exception cref="EmptyStackException">thrown when the stack is empty</exception>
	ItemType peek() const;

	/// <summary>
	/// Gets the current number of data items in the stack.
	/// </summary>
	/// <returns>the number of data items in the stack</returns>
	int size() const noexcept;

	/// <summary>
	/// Gets the maximum number of data items the stack can hold.
	/// </summary>
	/// <returns>the maximum number of data items the stack can hold</returns>
	int maxSize() const noexcept;

	/// <summary>
	/// Determines whether the stack is full or not.
	/// </summary>
	/// <returns>true if the stack is full, or false if not</returns>
	bool isFull() const noexcept;

	/// <summary>
	/// Determines whether the stack is empty or not.
	/// </summary>
	/// <returns>true if the stack is empty, or false if not</returns>
	bool isEmpty() const noexcept;
}; // end Stack

#include "Stack.cpp"

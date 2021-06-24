#pragma once
#include <iostream>
#include <cstring>
template <typename T>
class JSONObject
{
	private:
	char* key;
	T value; 

	public:	
	JSONObject()
	{
		key = NULL;
		value = 0;
	};
	JSONObject(const char* a,const T& value)
	{
		int len = strlen(a);
		this->key = new char[len + 1]; 
		strcpy_s(this->key,len+1, a); 
		this->key[len] = '\0';
		this->value = value;
	}
	char* getKey() const
	{
		return this->key;
	}
	T getValue() const
	{
		return this->value;
	}
	void print() const
	{
		std::cout << "Key: " << key << " Value: " << value;
	}
	void setKey(const char* key)
	{
		int len = strlen(key);
		this->key = new char[len + 1];
		strcpy_s(this->key, len + 1, key); 
		this->key[len] = '\0';
	}
	void setValue(T value)
	{
		this->value = value;
	}
};

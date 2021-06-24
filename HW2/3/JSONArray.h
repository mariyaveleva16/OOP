#pragma once
#include"JSONObject.h" 

int size = 0;
char* arr = new char[];
template <typename T>
class JSONArray
{
	private:
		JSONObject a;
		static JSONObject* a;
	public:
		void addObject(const JSONObject& a)
		{
			size++;
			char* arr1 = new char[size];
			for (int i = 0; i < size-1; i++)
			{
				arr1[i] = arr[i];
			}
			delete[] arr;
			arr1[size - 1] = a;
			arr1[size] = "\0";
			char* arr = new char[size];
			for (int i = 0; i < size; i++) {
				arr[i] = arr1[i];
			}
			delete[] arr1;
		};
};
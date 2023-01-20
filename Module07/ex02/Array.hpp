#ifndef _Array_HPP_
#define _Array_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //
template <typename T>
class	Array
{
	public	:
		Array () {
			arr = new T;
		}
		Array (unsigned int n) {
			for (size_t i = 0; i < n; i++)
			{
				arr[n] = new T;
			}
		}
		Array &operator= (const Array &obj) {
			arr = new T;
			*arr = *(obj.arr);
		}
		size_t size(void) {
			size_t len = sizeof(arr) / sizeof(arr[0]);
			return len;
		}

	private	:
		T *arr;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif

#ifndef _Array_HPP_
#define _Array_HPP_

#include <iostream>
#include <exception>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //
template <class T>
class	Array
{
	public	:
		Array ()
		{
			arr = new T;
		}
		Array (unsigned int n)
		{
			for (size_t i = 0; i < n; i++)
    		{
        		arr = new T;
    		}
		}
		Array &operator= (const Array &obj)
		{
			arr = new T;
    		*arr = *(obj.arr);
		}
		size_t size(void)
		{
			size_t len = sizeof(arr) / sizeof(arr[0]);
    		return len;
		}
		class BadIndex : public std::exception {
			public:
				const char *what() const throw(){
					return "Bad Index";
				}
		};
		
		T &operator[] (size_t index)
		{
			if (index > size() || index < size())
				throw BadIndex();
			return (arr[index]);
		}

	private	:
		T *arr;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif

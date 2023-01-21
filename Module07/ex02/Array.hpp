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
			_size = 0;
			arr = new T[_size];
			arr[0] = 0;
		}
		Array (unsigned int n)
		{
			_size = n;
			arr = new T[_size];
			for (size_t i = 0; i < _size; i++)
        		arr[i] = 0;
		}
		Array(const Array &obj)
		{
			*this = obj;
		}
		~Array () 
		{
			delete[] arr;
		}
		Array &operator= (const Array &obj)
		{
			_size  = 0;
			this->arr = new T[_size];
			this->arr[_size] = 0;
			*this->arr = *(obj.arr);
			return (*this);
		}
		unsigned int size(void)
		{
    		return _size;
		}
		class BadIndex : public std::exception {
			public:
				const char *what() const throw(){
					return "Bad Index";
				}
		};
		
		T &operator[] (size_t index)
		{
			if (index > size() || index < 0)
				throw BadIndex();
			return (arr[index]);
		}

	private	:
		unsigned int _size;
		T *arr;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif

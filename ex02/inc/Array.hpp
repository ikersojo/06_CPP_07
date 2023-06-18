/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 11:41:26 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/18 18:09:35 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
	#define ARRAY_HPP

	#include <iostream>

	template <typename T>
	class Array
	{
		public:
			// Constructors:
			Array();
			Array(const size_t n);
			Array(const Array<T>& obj);

			// Destructor:
			~Array();

			// Operator Overload:
			Array<T>&	operator=(const Array<T>& rhs);
			T&			operator[](const size_t& i) const;

			// Member functions:
			size_t	size(void) const;
			T&		getElem(const size_t& i) const;

			// Exceptions:
			class indexOutOfRangeException : public std::exception
			{
				public:
					virtual const char* what() const throw();
			};

		private:
			// Atributes:
			size_t	_size;
			T*		_elem;

	};

	template <typename T>
	std::ostream&	operator<<(const std::ostream& os, const Array<T>& obj);


	// Constructors:
	/* ************************************************************************** */

	template <typename T>
	Array<T>::Array(void)
	{
		if (DEBUG == 1)
			std::cout << "\033[0;93m" << "Default Array Constructor called"
						<< "\033[0;39m" << std::endl;
		this->_size = 0;
		this->_elem = new T[1];
	}

	template <typename T>
	Array<T>::Array(const size_t n)
	{
		if (DEBUG == 1)
			std::cout << "\033[0;93m" << "Sized Array Constructor called (size = " << n
						<< ")." << "\033[0;39m" << std::endl;

		this->_size = n;
		this->_elem = new T[n];
		size_t	i = 0;
		while (i < n)
			this->_elem[i++] = 0;
	}

	template <typename T>
	Array<T>::Array(const Array& obj)
	{
		if (DEBUG == 1)
			std::cout << "\033[0;93m" << "Copy Array Constructor called"
						<< "\033[0;39m" << std::endl;
		*this = obj;
	}

	// Destructor:
	/* ************************************************************************** */

	template <typename T>
	Array<T>::~Array(void)
	{
		if (DEBUG == 1)
			std::cout << "\033[0;93m" << "Default Array Destructor called"
						<< "\033[0;39m" << std::endl;
		delete[] _elem;
	}

	// Operator Override:
	/* ************************************************************************** */

	template <typename T>
	Array<T>&	Array<T>::operator=(const Array<T>& rhs)
	{
		size_t	i = 0;
		size_t	max_size = rhs.size();

		if (this != &rhs)
		{
			this->_size = max_size;
			this->_elem = new T[max_size];
			while (i < max_size)
			{
				this->_elem[i] = rhs.getElem(i);
				i++;
			}
		}
		return (*this);
	}

	template <typename T>
	T&	Array<T>::operator[](const size_t& i) const
	{
		return (this->getElem(i));
	}

	// Member functions:
	/* ************************************************************************** */

	template <typename T>
	T&	Array<T>::getElem(const size_t& i) const
	{
		if (i >= this->_size)
			throw indexOutOfRangeException();
		return (this->_elem[i]);
	}

	template <typename T>
	size_t	Array<T>::size(void) const
	{
		return(this->_size);
	}

	// Exceptions:
	/* ************************************************************************** */

	template <typename T>
	const char* Array<T>::indexOutOfRangeException::what() const throw()
	{
		return ("index is out of range.");
	}

	// Stream operator overload to print Array Class instances:
	/* ************************************************************************** */

	template <typename T>
	std::ostream&	operator<<(std::ostream& os, const Array<T>& obj)
	{
		size_t	i = 0;
		size_t	max = obj.size();

		os << "{";
		while (i < max)
		{
			os << obj.getElem(i);
			if (i != max - 1)
				os << ", ";
			i++;
		}
		os << "}";
		return (os);
	}

#endif // ARRAY_HPP

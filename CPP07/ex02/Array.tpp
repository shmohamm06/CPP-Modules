/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:21:14 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/23 12:27:53 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() : _data(NULL), _size(0) {
    std::cout << "Default constructor called\n";
}

template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]()), _size(n) {
    std::cout << "Parameterized constructor called\n";
}

template <typename T>
Array<T>::Array(const Array& other) : _data(new T[other._size]()), _size(other._size) {
    std::cout << "Copy constructor called\n";
    for (unsigned int i = 0; i < _size; i++)
        _data[i] = other._data[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    std::cout << "Assignment operator called\n";
    if (this != &other) {
        delete[] _data;
        _size = other._size;
        _data = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _data[i] = other._data[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    std::cout << "Destructor called\n";
    delete[] _data;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= _size)
        throw std::out_of_range("Index out of bounds\n");
    return _data[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}

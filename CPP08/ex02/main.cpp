/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:48:36 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/25 15:40:10 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() 
{
    std::cout << "Basic Stack Operations" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    
    std::cout << "Current top element: " << mstack.top() << std::endl;    
    mstack.pop();
    std::cout << "Stack size after popping: " << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    std::cout << "\nIterator Functionality" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    std::cout << "Stack elements during iteration:" << std::endl;
    while (it != ite) 
    {
        std::cout << *it << std::endl;
        ++it;
    }
   
    std::cout << "\nCopy Constructor" << std::endl;
    MutantStack<int> mstack_copy(mstack);
    std::cout << "Elements in the copied stack:" << std::endl;
    for (MutantStack<int>::iterator cit = mstack_copy.begin(); cit != mstack_copy.end(); cit++) 
    {
        std::cout << *cit << std::endl;
    }
    
    std::cout << "\nAssignment Operator" << std::endl;
    MutantStack<int> mstack_assigned;
    mstack_assigned = mstack;
    std::cout << "Elements in the assigned stack:" << std::endl;
    for (MutantStack<int>::iterator ait = mstack_assigned.begin(); ait != mstack_assigned.end(); ait++) {
        std::cout << *ait << std::endl;
    }
    
    std::cout << "\nCompatibility with std::stack" << std::endl;
    std::stack<int> s(mstack);
    std::cout << "Top element of the std::stack: " << s.top() << std::endl;

    return 0;
}

// int main() 
// {
//     std::cout << "Basic List Operations" << std::endl;
//     std::list<int> myList;
//     myList.push_back(5);
//     myList.push_back(17);
    
//     std::cout << "Current front element: " << myList.back() << std::endl;    
//     myList.pop_front();
//     myList.pop_front();
//     std::cout << "List size after popping: " << myList.size() << std::endl;
    
//     myList.push_back(3);
//     myList.push_back(5);
//     myList.push_back(737);
//     myList.push_back(0);
    
//     std::cout << "\nIterator Functionality" << std::endl;
//     std::list<int>::iterator it = myList.begin();
//     std::list<int>::iterator ite = myList.end();
    
//     std::cout << "List elements during iteration:" << std::endl;
//     while (it != ite) 
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
   
//     std::cout << "\nCopy Constructor" << std::endl;
//     std::list<int> list_copy(myList);
//     std::cout << "Elements in the copied list:" << std::endl;
//     for (std::list<int>::iterator cit = list_copy.begin(); cit != list_copy.end(); cit++) 
//     {
//         std::cout << *cit << std::endl;
//     }
    
//     std::cout << "\nAssignment Operator" << std::endl;
//     std::list<int> list_assigned;
//     list_assigned = myList;
//     std::cout << "Elements in the assigned list:" << std::endl;
//     for (std::list<int>::iterator ait = list_assigned.begin(); ait != list_assigned.end(); ait++) {
//         std::cout << *ait << std::endl;
//     }

//     return 0;
// }

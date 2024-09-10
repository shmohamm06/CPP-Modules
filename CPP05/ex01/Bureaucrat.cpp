/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:44:54 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/10 12:45:16 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(low) {
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name) {
    if (grade < high)
        throw Bureaucrat::GradeTooHighException();
    if (grade > low)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
    std::cout << "Parameterized constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name) {
    *this = other;
    std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& other){
    if (this != &other) {
        if (other._grade < high)
            throw Bureaucrat::GradeTooHighException();
        if (other._grade > low)
            throw Bureaucrat::GradeTooLowException();
        this->_grade = other._grade;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor called" << std::endl;
}

std::ostream & operator<<(std::ostream & os, Bureaucrat const & other){
    os << other.getName() << " " << other.getGrade() << std::endl;
    return os;
}

std::string Bureaucrat::getName() const{
    return this->_name;
}


int Bureaucrat::getGrade() const{
    return this->_grade;
}


void Bureaucrat::increment(){
    this->_grade--;
    if(this->_grade < high)
        throw Bureaucrat::GradeTooHighException();
}


void Bureaucrat::decrement(){

    this->_grade++;
    if(this->_grade > low)
        throw Bureaucrat::GradeTooLowException();
}

const char * Bureaucrat::GradeTooHighException::what() const throw() 
{
    return "TooHighException";
}

const char * Bureaucrat::GradeTooLowException::what() const throw() 
{
    return "TooLowException";
}

void Bureaucrat::signForm(Form& form) {
	form.beSigned(*this);
}
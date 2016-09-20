#pragma once
#include <list>
#include <iostream>
#include<string>
class Polynomial {

private:
	list<Term> L_Poly;

public:
	Polynomial();
	// Copy Constructor
	const Polynomial Polynomial(const Polynomial& Current_Poly);
	
	const Polynomial operator+(const Polynomial& rhs_Poly);
	
	friend const ostream& operator << (ostream& output, const Polynomial& Current_Poly);
	friend const istream& operator >> (istream& input, const Polynomial& Current_Poly);
	// maybe use string stream to parse through input polynomial

	//function to add Term element onto polynomial list
	void AddTerm(const Term& N_Term);
};
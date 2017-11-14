/*
 * Mail.cpp
 *
 *  Created on: Nov 10, 2017
 *      Author: jubas
 */

#include "Mail.h"
#include "Associate.h"

using namespace std;

//Constructors
Mail::Mail() {
	// TODO Auto-generated constructor stub

}

Mail::Mail(Associate * associate, string title, string body) :
		author(associate), title(title), body(body) {
	this->author->incDivulgations();
}
;

//Destructors
Mail::~Mail() {
	// TODO Auto-generated destructor stub
}

//Set Methods

void Mail::setAuthor(Associate * associate) {
	this->author = associate;
}

void Mail::setBody(string body) {
	this->body = body;
}

void Mail::setTitle(string title) {
	this->title = title;
}

//Get Methods

Associate * Mail::getAuthor() const {
	return this->author;
}

string Mail::getBody() const {
	return this->body;
}

string Mail::getTitle() const {
	return this->title;
}


/*
 * customer.h
 *
 *  Created on: Dec 26, 2015
 *      Author: dchiu
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

void *customer(void *args);
void custTravelToBar(unsigned int custID);
void custArriveAtBar(unsigned int custID);
void custPlaceOrder(unsigned int custID);
void custBrowseArt(unsigned int custID);
void custAtRegister(unsigned int custID);
void custLeaveBar(unsigned int custID);

#endif /* CUSTOMER_H_ */

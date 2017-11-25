// VC2017-LinkSample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "chilkat/include/CkCert.h"

// The purpose of this project is just to demonstrate using Chilkat and compiling/linking successfully..
void testSomething(void)
{
	CkCert cert;

	bool success = cert.LoadByCommonName("something");
	// We don't care about the results..

	return;
}


int main()
{
	testSomething();
    return 0;
}


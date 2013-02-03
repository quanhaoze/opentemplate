#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "tinyxml.h"

//main function
int main(int argc, char *argv[])
{
	TiXmlDocument *doc = new TiXmlDocument();
	doc->LoadFile("huo.xml");

	if (doc->Error())
	{
		 fprintf(stdout,"huo.xml load failure[%d]\n",doc->Error());
		 exit(EXIT_FAILURE);
	}

	//TiXmlHandle dochandle(doc);
	TiXmlElement *node = doc->RootElement();
	TiXmlElement *firstTiXmlElement = node->FirstChildElement("user-name");

	if (firstTiXmlElement == NULL)
	{
		printf("node-list not found[%d]",firstTiXmlElement);
		delete doc;
		doc = NULL;
		exit(EXIT_FAILURE);
	}
	firstTiXmlElement = firstTiXmlElement->NextSiblingElement();
	printf("[%s]\n",firstTiXmlElement->FirstChild()->Value());

	//doc.Print(stdout);
	delete doc;
	doc = NULL;
	return 0;

}

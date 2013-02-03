/*
 * xmlfiletypedef implement
 *
 */
#include <string>
#include <iostream>
#include "xmlfiletypedef.h"
#include "tinyxml.h"

int CreatXmlInfo(const char *str)
{
	//create Tixmldocument class pointer
	TiXmlDocument *doc = new TiXmlDocument();

	//null return false
	if (!doc)
		return false;

	//creat declaration type statement
	//version=1.0 encoding=utf8 _standalone=no
	TiXmlDeclaration *pdeclaration = new TiXmlDeclaration("1.0","utf8","no");

	//null return-value false
	if (!pdeclaration)
		return false;

	doc->LinkEndChild(pdeclaration);

	//声称根节点
	TiXmlElement *node = new TiXmlElement("App");

	if (!node )
		return false;

	//doc->linkend
	doc->LinkEndChild(node);

	///TiXmlElement
	TiXmlElement *node1 = new TiXmlElement("document");

	node->LinkEndChild(node1);

	node1->SetAttribute("ip","192.168.1.1");
	TiXmlText *nodename= new TiXmlText("huo");

	node1->LinkEndChild(nodename);

	TiXmlElement *node2 = new TiXmlElement("attribute");
	node2->SetAttribute("address","hello,world");
	TiXmlText *nodestr = new TiXmlText("helloworld");
	node2->LinkEndChild(nodestr);

	node->LinkEndChild(node2);
	std::cout << str << "Create Success" << std::endl;

	doc->SaveFile(str);

	delete doc;
	delete node;
	delete pdeclaration;
	return true;

}

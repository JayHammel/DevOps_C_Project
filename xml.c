#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "XmlDomDocument.h"

int main(int argc, char** argv)
{
    string value;
    XmlDomDocument* doc = new XmlDomDocument("./catalog.xml");
    if (doc){
        for(int i = 0; i < doc->getChildCount("catalog", 0, "book"); i++){
            value = doc->getChildValue("book", i, "title");
            printf("%s\n", value.c_str());
        }
        delete doc;
    }
    exit(0);
}
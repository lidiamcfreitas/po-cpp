#include "Person.h"
#include "Region.h"
#include "Village.h"
#include <iostream>

int main(){
    
    Person p1;
    Person p2;
    
    Person p3;
    Person p4;
    
    Person p5;
    Person p6;
    
    Village v1;
    Village v2;
    
    Region r1;
    Region r2;
    
    // test persons receiving help
    p1.receiveHelp(6);
    p1.printHelp();
    
    p2.receiveHelp(10);
    p2.printHelp();
    
    // add p1 and p2 to village v1
    v1.add(&p1);
    v1.add(&p2);
    
    // add people to village v2, including a person with no previous given help
    v2.add(&p3);
    p4.receiveHelp(2);
    v2.add(&p4);
    v2.printHelp();
    
    // test help division
    v2.receiveHelp(10);
    p3.printHelp();
    p4.printHelp();
    
    v1.printHelp();
    v2.printHelp();
    
    // add villages to region
    r1.add(&v1);
    r1.add(&v2);
    r1.printHelp();
    
    // test money division in region
    v1.printHelp();
    v2.printHelp();
    p1.printHelp();
    p2.printHelp();
    p3.printHelp();
    p4.printHelp();
    
    r1.receiveHelp(40);
    v1.printHelp();
    v2.printHelp();
    p1.printHelp();
    p2.printHelp();
    p3.printHelp();
    p4.printHelp();
    
    // create region with people and test division
    r2.add(&p5);
    r2.add(&p6);
    r2.receiveHelp(100);
    p5.printHelp();
    p6.printHelp();
    
}

#import "Village.h"

void Village::add(Person* person) { _vector.push_back(person); }

void Village::receiveHelp(int help)
{
    int partOfvalue; // dividing the help
    
    setHelpReceived(help);
    
    if (_vector.size()) // if it has elements
    {
        int partOfValue = help/_vector.size();
        int i;
        Person* person;
        
        for(i = 0, person = _vector.at(0); i<_vector.size(); i++){
            person = _vector.at (i);
            person->receiveHelp(partOfValue);
        }
    }
}

int Village::getHelpReceived()
{
    
    if (_vector.size()) {
        resetHelpReceived();
        int i;
        Person* person;
        
        for(i = 0, person = _vector.at(0); i<_vector.size(); i++){
            person = _vector.at (i);
            setHelpReceived(person->getHelpReceived());
        }
    }
    return getHelp();
}

void Village::printHelp() { std::cout << "Help: " << getHelpReceived() << std::endl; }
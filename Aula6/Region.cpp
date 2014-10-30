#import "Region.h"

void Region::add(RegionObject* element) { _vector.push_back(element); }

void Region::receiveHelp(int help)
{
    int partOfvalue; // dividing the help
    
    setHelpReceived(help);
    
    if (_vector.size()) // if it has elements
    {
        int partOfValue = help/_vector.size();
        int i;
        
        for(i = 0; i<_vector.size(); i++)
            _vector.at(i)->receiveHelp(partOfValue);
    }
}

int Region::getHelpReceived()
{
    if (_vector.size()) {
        resetHelpReceived();
        int i;
        
        for(i = 0; i<_vector.size(); i++)
            setHelpReceived(_vector.at(i)->getHelpReceived());
    }
    return getHelp();
}

void Region::printHelp() { std::cout << "Help: " << getHelpReceived() << std::endl; }
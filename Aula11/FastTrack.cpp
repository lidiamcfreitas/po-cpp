#include "FastTrack.h"

FastTrack::double visit(Person p){ return 1; }

double FastTrack::visit(Company c){
    double tax = 0;
    for (std::vector<std::shared_ptr<Person>>::iterator it = _people.begin() ; it != _people.end(); ++it){
        tax += visit((*it));
    }
}

double FastTrack::visit(Region r){
    bool _20discount = false;
    bool _40discount = false;
    for (std::vector<std::shared_ptr<Company>>::iterator it = _companies.begin() ; it != _companies.end(); ++it){
        if ((*it)->size() <4){
            _40discount = true;
        } else if ((*it)->size()<10){
            _20discount = true;
        }
        tax += visit((*it));
    }
    if (_40discount){
        return tax*0,6;
    } else if (_20discount){
        return tax*0,8;
    } else {
        return tax;
    }
}
#include <unordered_map>
#include <utility>
#include "Cell.h"
#include "String.h"
#include "Integer.h"

class Spreadsheet{
    std::unordered_map<std::string, Cell&> _spreadsheet;
    
public:
    void add(String& s)
    {
        Coordinates _coord = s.getCoordinates();
        std::string key = _coord.toString(); // get key
        
        if (freePosition(_coord))
            _spreadsheet.emplace(key, s);
        else
            std::cout << "position " << key << " already occupied" << std::endl;
        
    }
    
    bool freePosition(Coordinates _coord){
        
        std::string key = _coord.toString();
        
        try {
            _spreadsheet.at(key);
        } catch (const std::out_of_range& e) { // is not in spreadsheet
            return true;
        }
        
        return false;
    }
};
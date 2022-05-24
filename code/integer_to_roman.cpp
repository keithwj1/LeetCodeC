#include <map>
class Solution {
public:
    //included to show map use.
    string intToRomanMap(int num) {
        std::string roman = "";
        std::map<int,std::string> to_roman_map = {
            {1,"I"},
            {4,"IV"},
            {5,"V"},
            {9,"IX"},
            {10,"X"},
            {40,"XL"},
            {50,"L"},
            {90,"XC"},
            {100,"C"},
            {400,"CD"},
            {500,"D"},
            {900,"CM"},
            {1000,"M"},
        };
        std::map<int,std::string>::reverse_iterator it=to_roman_map.rbegin();
        while (it != to_roman_map.rend()){
            if (num >= it->first){
                num-=it->first;
                roman+=it->second;
            }
            else{
                it++;
            }
        }
        return roman;
    }
    //This is faster than pretty much anything else.
    string intToRoman(int num) {
        std::string roman = "";
        while (num > 0){
            if (num > 999){roman+="M"; num-=1000;}
            else if (num > 899){roman+="CM"; num-=900;}
            else if (num > 499){roman+="D"; num-=500;}
            else if (num > 399){roman+="CD"; num-=400;}
            else if (num > 99){roman+="C"; num-=100;}
            else if (num > 89){roman+="XC"; num-=90;}
            else if (num > 49){roman+="L"; num-=50;}
            else if (num > 39){roman+="XL"; num-=40;}
            else if (num > 9){roman+="X"; num-=10;}
            else if (num > 8){roman+="IX"; num-=9;}
            else if (num > 4){roman+="V"; num-=5;}
            else if (num > 3){roman+="IV"; num-=4;}
            else if (num > 0){roman+="I"; num-=1;}
        }
        return roman;
    }
};

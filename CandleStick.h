// it will receive the orders from orderbook  so orders will shift from private to public
// it will use orderbook methods (max,min)
//calculate closing price : total price/total amount 
//it will create volume function  better to be created in ordeers then used here
// opening price :- if first time frame  -> will take first entry as opening
                    //else it will take the previous closing price 
#include <string>
class CandleStick {
        public :
                CandleStick(double _highest, double _lowest, double _openPrice,
                double _closingPrice, std::string _currency);
                void draw(); 
                double openPriceF();
                std::string retCurrency();

        private : 
                double highest;
                double lowest;
                double openPrice;
                double closingPrice;
                std::string currency;
};
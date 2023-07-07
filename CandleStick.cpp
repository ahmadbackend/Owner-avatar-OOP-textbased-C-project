#include "CandleStick.h"
#include <iostream>
/**candle stick model  that has the characters and functions*/
 CandleStick::CandleStick(double _highest, double _lowest, double _openPrice,
                double _closingPrice, std::string _currency):
                highest(_highest),
                lowest(_lowest),
                openPrice(_openPrice),
                closingPrice(_closingPrice),
                currency(_currency)
                {

                }
void CandleStick::draw(){
                        std::cout <<" open price "<< openPrice<<" close price-> "<<closingPrice
                        <<"currency ->"<<currency <<"lowest price" <<lowest
                        << std::endl;
                }; 
double CandleStick::openPriceF(){
 return closingPrice;
};
std::string CandleStick::retCurrency(){
return currency;
}